/********************************************************************************
** Form generated from reading UI file 'eventreminder.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTREMINDER_H
#define UI_EVENTREMINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventReminder
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTabWidget *mainTabWidget;
    QWidget *myRemindersTab;
    QGridLayout *gridLayout_2;
    QListWidget *remindersListWidget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *quitPushButton_2;
    QWidget *addReminderTab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *reminderTitleIconPixMap;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *reminderTitleLineEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *reminderDescriptionIconPixMap;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *reminderDescriptionTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *reminderSoundIconPixMap;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *selectMusicComboBox;
    QToolButton *playSoundToolButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *reminderDateTimeIconPixMap;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QDateTimeEdit *reminderDateTimeEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addReminderPushButton;
    QPushButton *quitPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EventReminder)
    {
        if (EventReminder->objectName().isEmpty())
            EventReminder->setObjectName(QString::fromUtf8("EventReminder"));
        EventReminder->resize(493, 473);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(9);
        EventReminder->setFont(font);
        centralwidget = new QWidget(EventReminder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        mainTabWidget = new QTabWidget(centralwidget);
        mainTabWidget->setObjectName(QString::fromUtf8("mainTabWidget"));
        myRemindersTab = new QWidget();
        myRemindersTab->setObjectName(QString::fromUtf8("myRemindersTab"));
        gridLayout_2 = new QGridLayout(myRemindersTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        remindersListWidget = new QListWidget(myRemindersTab);
        remindersListWidget->setObjectName(QString::fromUtf8("remindersListWidget"));

        gridLayout_2->addWidget(remindersListWidget, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        quitPushButton_2 = new QPushButton(myRemindersTab);
        quitPushButton_2->setObjectName(QString::fromUtf8("quitPushButton_2"));

        horizontalLayout_8->addWidget(quitPushButton_2);


        gridLayout_2->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        mainTabWidget->addTab(myRemindersTab, QString());
        addReminderTab = new QWidget();
        addReminderTab->setObjectName(QString::fromUtf8("addReminderTab"));
        gridLayout = new QGridLayout(addReminderTab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        reminderTitleIconPixMap = new QLabel(addReminderTab);
        reminderTitleIconPixMap->setObjectName(QString::fromUtf8("reminderTitleIconPixMap"));

        horizontalLayout_6->addWidget(reminderTitleIconPixMap);

        label = new QLabel(addReminderTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        reminderTitleLineEdit = new QLineEdit(addReminderTab);
        reminderTitleLineEdit->setObjectName(QString::fromUtf8("reminderTitleLineEdit"));

        verticalLayout->addWidget(reminderTitleLineEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        reminderDescriptionIconPixMap = new QLabel(addReminderTab);
        reminderDescriptionIconPixMap->setObjectName(QString::fromUtf8("reminderDescriptionIconPixMap"));

        horizontalLayout_5->addWidget(reminderDescriptionIconPixMap);

        label_2 = new QLabel(addReminderTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        reminderDescriptionTextEdit = new QTextEdit(addReminderTab);
        reminderDescriptionTextEdit->setObjectName(QString::fromUtf8("reminderDescriptionTextEdit"));

        verticalLayout_2->addWidget(reminderDescriptionTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        reminderSoundIconPixMap = new QLabel(addReminderTab);
        reminderSoundIconPixMap->setObjectName(QString::fromUtf8("reminderSoundIconPixMap"));

        horizontalLayout_3->addWidget(reminderSoundIconPixMap);

        label_3 = new QLabel(addReminderTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        selectMusicComboBox = new QComboBox(addReminderTab);
        selectMusicComboBox->addItem(QString());
        selectMusicComboBox->setObjectName(QString::fromUtf8("selectMusicComboBox"));

        horizontalLayout_2->addWidget(selectMusicComboBox);

        playSoundToolButton = new QToolButton(addReminderTab);
        playSoundToolButton->setObjectName(QString::fromUtf8("playSoundToolButton"));

        horizontalLayout_2->addWidget(playSoundToolButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        reminderDateTimeIconPixMap = new QLabel(addReminderTab);
        reminderDateTimeIconPixMap->setObjectName(QString::fromUtf8("reminderDateTimeIconPixMap"));

        horizontalLayout_4->addWidget(reminderDateTimeIconPixMap);

        label_4 = new QLabel(addReminderTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        reminderDateTimeEdit = new QDateTimeEdit(addReminderTab);
        reminderDateTimeEdit->setObjectName(QString::fromUtf8("reminderDateTimeEdit"));

        verticalLayout_4->addWidget(reminderDateTimeEdit);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addReminderPushButton = new QPushButton(addReminderTab);
        addReminderPushButton->setObjectName(QString::fromUtf8("addReminderPushButton"));

        horizontalLayout->addWidget(addReminderPushButton);

        quitPushButton = new QPushButton(addReminderTab);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));

        horizontalLayout->addWidget(quitPushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        mainTabWidget->addTab(addReminderTab, QString());

        gridLayout_3->addWidget(mainTabWidget, 0, 0, 1, 1);

        EventReminder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EventReminder);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 493, 20));
        EventReminder->setMenuBar(menubar);
        statusbar = new QStatusBar(EventReminder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        EventReminder->setStatusBar(statusbar);

        retranslateUi(EventReminder);

        mainTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EventReminder);
    } // setupUi

    void retranslateUi(QMainWindow *EventReminder)
    {
        EventReminder->setWindowTitle(QCoreApplication::translate("EventReminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\321\217 \320\276 \321\201\320\276\320\261\321\213\321\202\320\270\321\217\321\205", nullptr));
        quitPushButton_2->setText(QCoreApplication::translate("EventReminder", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(myRemindersTab), QCoreApplication::translate("EventReminder", "\320\234\320\276\320\270 \320\275\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\321\217", nullptr));
        reminderTitleIconPixMap->setText(QCoreApplication::translate("EventReminder", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("EventReminder", "\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272", nullptr));
        reminderDescriptionIconPixMap->setText(QCoreApplication::translate("EventReminder", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("EventReminder", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        reminderSoundIconPixMap->setText(QCoreApplication::translate("EventReminder", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("EventReminder", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\274\320\265\320\273\320\276\320\264\320\270\321\216 \320\276\320\277\320\276\320\262\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        selectMusicComboBox->setItemText(0, QCoreApplication::translate("EventReminder", "sound_1", nullptr));

        playSoundToolButton->setText(QCoreApplication::translate("EventReminder", "...", nullptr));
        reminderDateTimeIconPixMap->setText(QCoreApplication::translate("EventReminder", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("EventReminder", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\260\321\202\321\203 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\276\320\277\320\276\320\262\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        reminderDateTimeEdit->setDisplayFormat(QCoreApplication::translate("EventReminder", "dd.MM.yyyy HH:mm", nullptr));
        addReminderPushButton->setText(QCoreApplication::translate("EventReminder", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        quitPushButton->setText(QCoreApplication::translate("EventReminder", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        mainTabWidget->setTabText(mainTabWidget->indexOf(addReminderTab), QCoreApplication::translate("EventReminder", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventReminder: public Ui_EventReminder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTREMINDER_H
