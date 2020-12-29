#ifndef REMINDERPROPERTY_H
#define REMINDERPROPERTY_H

#include <QWidget>
#include <qcustombutton.h>
#include <QSettings>
#include <QMessageBox>
#include <QMediaPlayer>

namespace Ui {
class ReminderProperty;
}

class ReminderProperty : public QWidget
{
    Q_OBJECT

public:
    explicit ReminderProperty(QString pathToDirectoryApplication, QString reminderName, QWidget *parent = nullptr);
    ~ReminderProperty();

private slots:
    void on_closePushButton_clicked();
    void on_playSoundToolButton_triggered(QAction *arg1);
    void on_saveReminderToolButton_clicked();

private:
    Ui::ReminderProperty *ui;
    QString pathToDirectoryApplication_;
    QString reminderName_;
};

#endif // REMINDERPROPERTY_H
