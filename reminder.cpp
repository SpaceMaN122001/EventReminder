#include "reminder.h"

Reminder::Reminder(QString pathToDirectoryApplication, QListWidget* listWidget)
{
    pathToDirectoryApplication_ = pathToDirectoryApplication;
    listWidget_ = listWidget;
}

bool Reminder::add(QString reminderTitle, QString reminderDescription, QString sound, QString reminderDateTime)
{
    QFile file(pathToDirectoryApplication_ + reminderTitle + ".ini");

    if(file.exists())
        return false;

    file.open(QIODevice::WriteOnly);
    file.close();

    QSettings settings(pathToDirectoryApplication_ + reminderTitle + ".ini", QSettings::IniFormat);
    settings.beginGroup("Reminder");
    settings.setValue("Title", reminderTitle);
    settings.setValue("Description", reminderDescription);
    settings.setValue("Sound", sound);
    settings.setValue("DateTime", reminderDateTime);
    settings.setValue("State", 0);
    settings.endGroup();

    return true;
}

void Reminder::show()
{
    QDir dir(pathToDirectoryApplication_);
    QFileInfoList fileList = dir.entryInfoList();

    listWidget_->clear();

    foreach(QFileInfo fileInfo , fileList){

        if(fileInfo.suffix() != nullptr){

            listWidget_->addItem(new  QListWidgetItem(QIcon(":/res/reminder.png"), fileInfo.fileName().remove(".ini")));
        }
    }
}

void Reminder::check(QWidget* window)
{
    QDir dir(pathToDirectoryApplication_);
    QFileInfoList fileList = dir.entryInfoList();

    foreach(QFileInfo fileInfo , fileList){

        if(fileInfo.suffix() != nullptr){

            QDateTime time;
            QString time2;
            QDateTime current = QDateTime::currentDateTime();
            QString title;
            QString description;
            QSettings settings(pathToDirectoryApplication_ + fileInfo.fileName(), QSettings::IniFormat);
            QString state;
            QString sound;

            settings.beginGroup("Reminder");

            QString iniDateTime = settings.value("DateTime").toString();
            time2 = iniDateTime;

            time = QDateTime::fromString(iniDateTime, "dd.MM.yyyy HH:mm");
            title = settings.value("Title").toString();
            description = settings.value("Description").toString();
            state = settings.value("State").toString();
            sound = settings.value("Sound").toString();

            settings.endGroup();

            //qDebug() << current.toString("dd.MM.yyyy HH:mm") << "\n";
            //qDebug() << time2 << "\n";

            if(current.toString("dd.MM.yyyy HH:mm") == time.toString("dd.MM.yyyy HH:mm") && state == '0'){

                //QMessageBox::warning(window, title, description);

                ReminderForm* form = new ReminderForm(title, description, sound);
                form->setAttribute(Qt::WA_DeleteOnClose);
                form->show();

                settings.beginGroup("Reminder");

                settings.setValue("State", 1);

                settings.endGroup();

                //delete player;
            }
        }
    }
}

void Reminder::remove(QString reminderName)
{
    QDir dir(pathToDirectoryApplication_);
    QFileInfoList fileList = dir.entryInfoList();

    foreach(QFileInfo fileInfo , fileList){

        if(fileInfo.suffix() != nullptr){

            if(fileInfo.fileName() == reminderName + ".ini"){

                QFile file(pathToDirectoryApplication_ + reminderName + ".ini");
                file.remove();
                file.close();

                show();

                return;
            }
        }
    }
}

void Reminder::removeAll()
{
    QDir dir(pathToDirectoryApplication_);
    QFileInfoList fileList = dir.entryInfoList();

    foreach(QFileInfo fileInfo , fileList){

        if(fileInfo.suffix() != nullptr){

            QFile file(pathToDirectoryApplication_ + fileInfo.fileName());
            file.remove();
            file.close();
        }
    }
}
