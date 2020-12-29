#ifndef REMINDER_FORM_H
#define REMINDER_FORM_H

#include <QWidget>
#include <QMediaPlayer>

namespace Ui {
class Reminder;
}

class ReminderForm : public QWidget
{
    Q_OBJECT

public:
    explicit ReminderForm (QString title, QString desc, QString sound, QWidget *parent = nullptr);
    ~ReminderForm ();

private slots:
    void on_closePushButton_clicked();

private:
    Ui::Reminder *ui;
};

#endif // REMINDER_FORM_H
