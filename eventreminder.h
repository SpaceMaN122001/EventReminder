#ifndef EVENTREMINDER_H
#define EVENTREMINDER_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QEvent>
#include <QKeyEvent>
#include <qcustombutton.h>
#include <memory>
#include "reminder.h"
#include "reminderproperty.h"
#include "reminder_form.h"

QT_BEGIN_NAMESPACE
namespace Ui { class EventReminder; }
QT_END_NAMESPACE

class EventReminder : public QMainWindow
{
    Q_OBJECT

public:
    EventReminder(QWidget *parent = nullptr);
    ~EventReminder();

private:
    Ui::EventReminder *ui;
    QTimer* timer_;
    Reminder* reminder_;
    QSystemTrayIcon* trayIcon_;
    QString selectedReminder_;
    QString pathToRoaming;

private slots:
    void timeEvent();
    void on_playSoundToolButton_clicked();
    void on_remindersListWidget_customContextMenuRequested(const QPoint &pos);
    void on_remindersListWidget_itemClicked(QListWidgetItem *item);
    void on_quitPushButton_clicked();
    void on_addReminderPushButton_clicked();
    void on_quitPushButton_2_clicked();
};
#endif // EVENTREMINDER_H
