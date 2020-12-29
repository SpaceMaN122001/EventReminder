#include "eventreminder.h"
#include "ui_eventreminder.h"

EventReminder::EventReminder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EventReminder)
{
    ui->setupUi(this);
    ui->remindersListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->remindersListWidget->setIconSize(QSize(32, 32));
    ui->reminderDateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->mainTabWidget->setTabIcon(0, QIcon(":/res/my_reminder.png"));
    ui->mainTabWidget->setTabIcon(1, QIcon(":/res/add_reminder.png"));
    ui->mainTabWidget->setIconSize(QSize(26, 26));
    ui->reminderTitleIconPixMap->setPixmap(QPixmap(":/res/reminder_title.png").scaled(26, 26));
    ui->reminderDescriptionIconPixMap->setPixmap(QPixmap(":/res/reminder_desc.png").scaled(26, 26));
    ui->reminderSoundIconPixMap->setPixmap(QPixmap(":/res/reminder_music.png").scaled(26, 26));
    ui->reminderDateTimeIconPixMap->setPixmap(QPixmap(":/res/reminder_date_time.png").scaled(26, 26));
    QCustomButton::setCustomButtonStyle(*ui->playSoundToolButton, ":/res/music_play.png", "Проиграть мелодию", 26, 26);


    setWindowIcon(QIcon(":/res/event_reminder.png"));

    pathToRoaming = "C:\\Users\\" + QDir::home().dirName() + "\\AppData\\Roaming\\";

    QDir dir(pathToRoaming);

    if(!dir.exists("EventReminder"))
        dir.mkdir("EventReminder");
    pathToRoaming += "EventReminder\\";

    timer_ = new QTimer();
    reminder_ = new Reminder(pathToRoaming, ui->remindersListWidget);
    reminder_->show();

    connect(timer_, &QTimer::timeout, this, [this]()
    {
        reminder_->check(this);
    });

    timer_->start(1000);
}

EventReminder::~EventReminder()
{
    delete ui;
    delete reminder_;
}

void EventReminder::timeEvent()
{
    QMessageBox::about(this, "", "");
}

//утчека тупой qt
void EventReminder::on_playSoundToolButton_clicked()
{
    QMediaPlayer* player = new QMediaPlayer();
    player->setMedia(QUrl("qrc:/res/" + ui->selectMusicComboBox->currentText() + ".mp3"));
    player->setVolume(50);
    player->play();
}

void EventReminder::on_remindersListWidget_customContextMenuRequested(const QPoint &pos)
{
    if(ui->remindersListWidget->count() > 0)
        selectedReminder_ = ui->remindersListWidget->currentItem()->text();

    QPoint globalPos = ui->remindersListWidget->mapToGlobal(pos);

    QMenu* menu = new QMenu(this);
    menu->setAttribute(Qt::WA_DeleteOnClose);

    QAction* reminderAboutAction = new QAction(QPixmap(":/res/about.png"), "&О напоминании", this);
    QAction* reminderDeleteAction = new QAction(QPixmap(":/res/remove.png"), "&Удалить", this);
    QAction* reminderDeleteAllAction = new QAction(QPixmap(":/res/remove.png"), "&Удалить все", this);


    menu->addAction(reminderAboutAction);
    menu->addAction(reminderDeleteAction);
    menu->addAction(reminderDeleteAllAction);

    connect(reminderDeleteAction, &QAction::triggered, this, [this]()
    {
        reminder_->remove(selectedReminder_);
    });

    connect(reminderAboutAction, &QAction::triggered, this, [this]()
    {
        ReminderProperty* property = new ReminderProperty(pathToRoaming, selectedReminder_);
        property->setAttribute(Qt::WA_DeleteOnClose);
        property->show();

        reminder_->show();
    });

    connect(reminderDeleteAllAction, &QAction::triggered, this, [this]()
    {
        int result = QMessageBox::warning(this, "Внимание!", "Вы хотите удалить все напоминания?", QMessageBox::Yes | QMessageBox::No);

        if(result == QMessageBox::Yes) {

            reminder_->removeAll();
            reminder_->show();

            QMessageBox::information(this, "Внимание!", "Все напоминания удалены!");
        }
    });

    menu->exec(globalPos);
}

void EventReminder::on_remindersListWidget_itemClicked(QListWidgetItem *item)
{
    selectedReminder_ = ui->remindersListWidget->currentItem()->text();
}

void EventReminder::on_quitPushButton_clicked()
{
    QApplication::quit();
}

void EventReminder::on_addReminderPushButton_clicked()
{
    QString reminderTitle = ui->reminderTitleLineEdit->text();
    QString reminderDescription = ui->reminderDescriptionTextEdit->toPlainText();
    QString sound = ui->selectMusicComboBox->currentText();
    QString date = ui->reminderDateTimeEdit->text();

    if(reminderTitle.isEmpty() || reminderDescription.isEmpty() || sound.isEmpty() || date.isEmpty()){

        QMessageBox::warning(this, "Внимание!", "Не все поля заполнены!");

        return;
    }

    if(!reminder_->add(reminderTitle, reminderDescription, sound, date)){

        QMessageBox::warning(this, "Внимание!", "Напоминание с таким именем уже существует!");

        return;
    }

    reminder_->show();

    QMessageBox::information(this, "Готово!", "Напоминание добавлено!");

    ui->reminderDateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->reminderTitleLineEdit->setText("");
    ui->reminderDescriptionTextEdit->setText("");
}

void EventReminder::on_quitPushButton_2_clicked()
{
    QApplication::quit();
}
