/********************************************************************************
** Form generated from reading UI file 'reminderproperty.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDERPROPERTY_H
#define UI_REMINDERPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReminderProperty
{
public:
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
    QToolButton *saveReminderToolButton;
    QPushButton *closePushButton;

    void setupUi(QWidget *ReminderProperty)
    {
        if (ReminderProperty->objectName().isEmpty())
            ReminderProperty->setObjectName(QString::fromUtf8("ReminderProperty"));
        ReminderProperty->setWindowModality(Qt::ApplicationModal);
        ReminderProperty->resize(443, 414);
        gridLayout = new QGridLayout(ReminderProperty);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        reminderTitleIconPixMap = new QLabel(ReminderProperty);
        reminderTitleIconPixMap->setObjectName(QString::fromUtf8("reminderTitleIconPixMap"));

        horizontalLayout_6->addWidget(reminderTitleIconPixMap);

        label = new QLabel(ReminderProperty);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_6);

        reminderTitleLineEdit = new QLineEdit(ReminderProperty);
        reminderTitleLineEdit->setObjectName(QString::fromUtf8("reminderTitleLineEdit"));

        verticalLayout->addWidget(reminderTitleLineEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        reminderDescriptionIconPixMap = new QLabel(ReminderProperty);
        reminderDescriptionIconPixMap->setObjectName(QString::fromUtf8("reminderDescriptionIconPixMap"));

        horizontalLayout_5->addWidget(reminderDescriptionIconPixMap);

        label_2 = new QLabel(ReminderProperty);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        reminderDescriptionTextEdit = new QTextEdit(ReminderProperty);
        reminderDescriptionTextEdit->setObjectName(QString::fromUtf8("reminderDescriptionTextEdit"));

        verticalLayout_2->addWidget(reminderDescriptionTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        reminderSoundIconPixMap = new QLabel(ReminderProperty);
        reminderSoundIconPixMap->setObjectName(QString::fromUtf8("reminderSoundIconPixMap"));

        horizontalLayout_3->addWidget(reminderSoundIconPixMap);

        label_3 = new QLabel(ReminderProperty);
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
        selectMusicComboBox = new QComboBox(ReminderProperty);
        selectMusicComboBox->addItem(QString());
        selectMusicComboBox->setObjectName(QString::fromUtf8("selectMusicComboBox"));

        horizontalLayout_2->addWidget(selectMusicComboBox);

        playSoundToolButton = new QToolButton(ReminderProperty);
        playSoundToolButton->setObjectName(QString::fromUtf8("playSoundToolButton"));

        horizontalLayout_2->addWidget(playSoundToolButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        reminderDateTimeIconPixMap = new QLabel(ReminderProperty);
        reminderDateTimeIconPixMap->setObjectName(QString::fromUtf8("reminderDateTimeIconPixMap"));

        horizontalLayout_4->addWidget(reminderDateTimeIconPixMap);

        label_4 = new QLabel(ReminderProperty);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        reminderDateTimeEdit = new QDateTimeEdit(ReminderProperty);
        reminderDateTimeEdit->setObjectName(QString::fromUtf8("reminderDateTimeEdit"));

        verticalLayout_4->addWidget(reminderDateTimeEdit);


        verticalLayout_2->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveReminderToolButton = new QToolButton(ReminderProperty);
        saveReminderToolButton->setObjectName(QString::fromUtf8("saveReminderToolButton"));

        horizontalLayout->addWidget(saveReminderToolButton);

        closePushButton = new QPushButton(ReminderProperty);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout->addWidget(closePushButton);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(ReminderProperty);

        QMetaObject::connectSlotsByName(ReminderProperty);
    } // setupUi

    void retranslateUi(QWidget *ReminderProperty)
    {
        ReminderProperty->setWindowTitle(QCoreApplication::translate("ReminderProperty", "\320\236 \320\275\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\270", nullptr));
        reminderTitleIconPixMap->setText(QCoreApplication::translate("ReminderProperty", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ReminderProperty", "\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272", nullptr));
        reminderDescriptionIconPixMap->setText(QCoreApplication::translate("ReminderProperty", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("ReminderProperty", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
        reminderSoundIconPixMap->setText(QCoreApplication::translate("ReminderProperty", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("ReminderProperty", "\320\234\320\265\320\273\320\276\320\264\320\270\321\217 \320\276\320\277\320\276\320\262\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        selectMusicComboBox->setItemText(0, QCoreApplication::translate("ReminderProperty", "sound_1", nullptr));

        playSoundToolButton->setText(QCoreApplication::translate("ReminderProperty", "...", nullptr));
        reminderDateTimeIconPixMap->setText(QCoreApplication::translate("ReminderProperty", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ReminderProperty", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\276\320\277\320\276\320\262\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        reminderDateTimeEdit->setDisplayFormat(QCoreApplication::translate("ReminderProperty", "dd.MM.yyyy HH:mm", nullptr));
        saveReminderToolButton->setText(QCoreApplication::translate("ReminderProperty", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        closePushButton->setText(QCoreApplication::translate("ReminderProperty", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReminderProperty: public Ui_ReminderProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDERPROPERTY_H
