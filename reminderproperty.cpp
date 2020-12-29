#include "reminderproperty.h"
#include "ui_reminderproperty.h"

ReminderProperty::ReminderProperty(QString pathToDirectoryApplication, QString reminderName, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReminderProperty)
{
    pathToDirectoryApplication_ = pathToDirectoryApplication;
    reminderName_ = reminderName;

    ui->setupUi(this);
    ui->reminderTitleIconPixMap->setPixmap(QPixmap(":/res/reminder_title.png").scaled(26, 26));
    ui->reminderDescriptionIconPixMap->setPixmap(QPixmap(":/res/reminder_desc.png").scaled(26, 26));
    ui->reminderSoundIconPixMap->setPixmap(QPixmap(":/res/reminder_music.png").scaled(26, 26));
    ui->reminderDateTimeIconPixMap->setPixmap(QPixmap(":/res/reminder_date_time.png").scaled(26, 26));
    QCustomButton::setCustomButtonStyle(*ui->playSoundToolButton, ":/res/music_play.png", "Проиграть мелодию", 26, 26);

    setWindowIcon(QIcon(":/res/event_reminder.png"));

    QSettings settings(pathToDirectoryApplication + reminderName + ".ini", QSettings::IniFormat);

    settings.beginGroup("Reminder");

    ui->reminderTitleLineEdit->setText(settings.value("Title").toString());
    ui->reminderDescriptionTextEdit->setText(settings.value("Description").toString());
    ui->selectMusicComboBox->setItemText(0, settings.value("Sound").toString());
    ui->reminderDateTimeEdit->setDateTime(QDateTime::fromString(settings.value("DateTime").toString(), "dd.MM.yyyy HH:mm"));

    settings.endGroup();
}

ReminderProperty::~ReminderProperty()
{
    delete ui;
}

void ReminderProperty::on_closePushButton_clicked()
{
    close();
}

void ReminderProperty::on_playSoundToolButton_triggered(QAction *arg1)
{
    QMediaPlayer* player = new QMediaPlayer();
    player->setMedia(QUrl("qrc:/res/" + ui->selectMusicComboBox->currentText() + ".mp3"));
    player->setVolume(50);
    player->play();
}

void ReminderProperty::on_saveReminderToolButton_clicked()
{
    QString reminderTitle = ui->reminderTitleLineEdit->text();
    QString reminderDescription = ui->reminderDescriptionTextEdit->toPlainText();
    QString sound = ui->selectMusicComboBox->currentText();
    QString date = ui->reminderDateTimeEdit->text();

    if(reminderTitle.isEmpty() || reminderDescription.isEmpty() || sound.isEmpty() || date.isEmpty()){

        QMessageBox::warning(this, "Внимание!", "Не все поля заполнены!");

        return;
    }

    QSettings settings(pathToDirectoryApplication_ + reminderName_ + ".ini", QSettings::IniFormat);
    settings.beginGroup("Reminder");

    settings.setValue("Title", reminderTitle);
    settings.setValue("Description", reminderDescription);
    settings.setValue("Sound", sound);
    settings.setValue("DateTime", date);
    settings.setValue("State", "0");

    settings.endGroup();

    QMessageBox::information(this, "Внимание!", "Напоминание успешно изменено!");

    close();
}
