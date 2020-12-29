#include "reminder_form.h"
#include "ui_reminder_form.h"

ReminderForm ::ReminderForm (QString title, QString desc, QString sound, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reminder)
{
    ui->setupUi(this);
    ui->reminderTitleLabel->setText(title);
    ui->reminderDescriptionLabel->setText(desc);

    setWindowFlag(Qt::WindowStaysOnTopHint);
    setWindowIcon(QIcon(":/res/event_reminder.png"));

    QMediaPlayer* player = new QMediaPlayer();
    player->setMedia(QUrl("qrc:/res/" + sound + ".mp3"));
    player->setVolume(50);
    player->play();
}

ReminderForm ::~ReminderForm ()
{
    delete ui;
}

void ReminderForm::on_closePushButton_clicked()
{
    close();
}
