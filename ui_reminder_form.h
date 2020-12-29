/********************************************************************************
** Form generated from reading UI file 'reminder_form.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDER_FORM_H
#define UI_REMINDER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reminder
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *reminderTitleLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *reminderDescriptionLabel;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closePushButton;

    void setupUi(QWidget *Reminder)
    {
        if (Reminder->objectName().isEmpty())
            Reminder->setObjectName(QString::fromUtf8("Reminder"));
        Reminder->setWindowModality(Qt::ApplicationModal);
        Reminder->resize(423, 433);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(9);
        Reminder->setFont(font);
        gridLayout = new QGridLayout(Reminder);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reminderTitleLabel = new QLabel(Reminder);
        reminderTitleLabel->setObjectName(QString::fromUtf8("reminderTitleLabel"));

        horizontalLayout->addWidget(reminderTitleLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        reminderDescriptionLabel = new QLabel(Reminder);
        reminderDescriptionLabel->setObjectName(QString::fromUtf8("reminderDescriptionLabel"));

        verticalLayout->addWidget(reminderDescriptionLabel);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closePushButton = new QPushButton(Reminder);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Reminder);

        QMetaObject::connectSlotsByName(Reminder);
    } // setupUi

    void retranslateUi(QWidget *Reminder)
    {
        Reminder->setWindowTitle(QCoreApplication::translate("Reminder", "\320\235\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\265!", nullptr));
        reminderTitleLabel->setText(QCoreApplication::translate("Reminder", "Title", nullptr));
        reminderDescriptionLabel->setText(QCoreApplication::translate("Reminder", "text", nullptr));
        closePushButton->setText(QCoreApplication::translate("Reminder", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reminder: public Ui_Reminder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDER_FORM_H
