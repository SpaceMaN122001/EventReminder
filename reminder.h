#ifndef REMINDER_H
#define REMINDER_H

#include <QWidget>
#include <QSettings>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QListWidget>
#include <QFileInfo>
#include <QDateTime>
#include <QMediaPlayer>
#include "reminder_form.h"

class Reminder
{
public:
    Reminder(QString pathToDirectoryApplication, QListWidget* listWidget);
    bool add(QString reminderTitle, QString reminderDescription, QString sound, QString reminderDateTime);
    void show();
    void check(QWidget* window);
    void remove(QString reminderName);
    void removeAll();
private:
    QString pathToDirectoryApplication_;
    QListWidget* listWidget_;
};

#endif // REMINDER_H
