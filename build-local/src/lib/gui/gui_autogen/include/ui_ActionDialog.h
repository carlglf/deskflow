/********************************************************************************
** Form generated from reading UI file 'ActionDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONDIALOG_H
#define UI_ACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include "widgets/KeySequenceWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ActionDialog
{
public:
    QVBoxLayout *_2;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboTriggerOn;
    QComboBox *comboActionType;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboSwitchToScreen;
    QComboBox *comboSwitchInDirection;
    QComboBox *comboLockCursorToScreen;
    KeySequenceWidget *keySequenceWidget;
    QGroupBox *groupScreens;
    QHBoxLayout *_3;
    QListWidget *listScreens;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActionDialog)
    {
        if (ActionDialog->objectName().isEmpty())
            ActionDialog->setObjectName("ActionDialog");
        ActionDialog->resize(706, 256);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ActionDialog->sizePolicy().hasHeightForWidth());
        ActionDialog->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(ActionDialog);
        _2->setObjectName("_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        comboTriggerOn = new QComboBox(ActionDialog);
        comboTriggerOn->addItem(QString());
        comboTriggerOn->addItem(QString());
        comboTriggerOn->setObjectName("comboTriggerOn");

        horizontalLayout_4->addWidget(comboTriggerOn);

        comboActionType = new QComboBox(ActionDialog);
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->addItem(QString());
        comboActionType->setObjectName("comboActionType");

        horizontalLayout_4->addWidget(comboActionType);


        _2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboSwitchToScreen = new QComboBox(ActionDialog);
        comboSwitchToScreen->setObjectName("comboSwitchToScreen");
        comboSwitchToScreen->setEnabled(true);

        horizontalLayout_2->addWidget(comboSwitchToScreen);

        comboSwitchInDirection = new QComboBox(ActionDialog);
        comboSwitchInDirection->addItem(QString());
        comboSwitchInDirection->addItem(QString());
        comboSwitchInDirection->addItem(QString());
        comboSwitchInDirection->addItem(QString());
        comboSwitchInDirection->setObjectName("comboSwitchInDirection");
        comboSwitchInDirection->setEnabled(true);

        horizontalLayout_2->addWidget(comboSwitchInDirection);

        comboLockCursorToScreen = new QComboBox(ActionDialog);
        comboLockCursorToScreen->addItem(QString());
        comboLockCursorToScreen->addItem(QString());
        comboLockCursorToScreen->addItem(QString());
        comboLockCursorToScreen->setObjectName("comboLockCursorToScreen");
        comboLockCursorToScreen->setEnabled(true);

        horizontalLayout_2->addWidget(comboLockCursorToScreen);

        keySequenceWidget = new KeySequenceWidget(ActionDialog);
        keySequenceWidget->setObjectName("keySequenceWidget");

        horizontalLayout_2->addWidget(keySequenceWidget);


        _2->addLayout(horizontalLayout_2);

        groupScreens = new QGroupBox(ActionDialog);
        groupScreens->setObjectName("groupScreens");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupScreens->sizePolicy().hasHeightForWidth());
        groupScreens->setSizePolicy(sizePolicy1);
        _3 = new QHBoxLayout(groupScreens);
        _3->setObjectName("_3");
        listScreens = new QListWidget(groupScreens);
        listScreens->setObjectName("listScreens");
        listScreens->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);

        _3->addWidget(listScreens);


        _2->addWidget(groupScreens);

        buttonBox = new QDialogButtonBox(ActionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        _2->addWidget(buttonBox);


        retranslateUi(ActionDialog);

        QMetaObject::connectSlotsByName(ActionDialog);
    } // setupUi

    void retranslateUi(QDialog *ActionDialog)
    {
        ActionDialog->setWindowTitle(QCoreApplication::translate("ActionDialog", "Configure Action", nullptr));
        comboTriggerOn->setItemText(0, QCoreApplication::translate("ActionDialog", "When the hotkey is pressed", nullptr));
        comboTriggerOn->setItemText(1, QCoreApplication::translate("ActionDialog", "When the hotkey is released", nullptr));

        comboActionType->setItemText(0, QCoreApplication::translate("ActionDialog", "Press key(s)", nullptr));
        comboActionType->setItemText(1, QCoreApplication::translate("ActionDialog", "Release key(s)", nullptr));
        comboActionType->setItemText(2, QCoreApplication::translate("ActionDialog", "Press and release key(s)", nullptr));
        comboActionType->setItemText(3, QCoreApplication::translate("ActionDialog", "Switch to a computer", nullptr));
        comboActionType->setItemText(4, QCoreApplication::translate("ActionDialog", "Switch in a direction", nullptr));
        comboActionType->setItemText(5, QCoreApplication::translate("ActionDialog", "Switch to next computer", nullptr));
        comboActionType->setItemText(6, QCoreApplication::translate("ActionDialog", "Modify the cursor lock", nullptr));
        comboActionType->setItemText(7, QCoreApplication::translate("ActionDialog", "Restart the server", nullptr));

        comboSwitchInDirection->setItemText(0, QCoreApplication::translate("ActionDialog", "Switch to the computer on the left", nullptr));
        comboSwitchInDirection->setItemText(1, QCoreApplication::translate("ActionDialog", "Switch to the computer on the right", nullptr));
        comboSwitchInDirection->setItemText(2, QCoreApplication::translate("ActionDialog", "Switch to the computer above", nullptr));
        comboSwitchInDirection->setItemText(3, QCoreApplication::translate("ActionDialog", "Switch to the computer below", nullptr));

        comboLockCursorToScreen->setItemText(0, QCoreApplication::translate("ActionDialog", "Toggle the cursor lock", nullptr));
        comboLockCursorToScreen->setItemText(1, QCoreApplication::translate("ActionDialog", "Enable the cursor lock", nullptr));
        comboLockCursorToScreen->setItemText(2, QCoreApplication::translate("ActionDialog", "Disable the cursor lock", nullptr));

        groupScreens->setTitle(QCoreApplication::translate("ActionDialog", "Computers to receive this event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActionDialog: public Ui_ActionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONDIALOG_H
