/********************************************************************************
** Form generated from reading UI file 'ClientConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCONFIGDIALOG_H
#define UI_CLIENTCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *cbDynamicConnectTime;
    QCheckBox *cbLanguageSync;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *cbYScrollInvert;
    QCheckBox *cbXScrollInvert;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblScrollSpeed;
    QDoubleSpinBox *sbYScrollScale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblXScrollSpeed;
    QDoubleSpinBox *sbXScrollScale;
    QLabel *lblHScroll;
    QLabel *lblVScroll;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClientConfigDialog)
    {
        if (ClientConfigDialog->objectName().isEmpty())
            ClientConfigDialog->setObjectName("ClientConfigDialog");
        ClientConfigDialog->resize(391, 176);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientConfigDialog->sizePolicy().hasHeightForWidth());
        ClientConfigDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ClientConfigDialog);
        verticalLayout->setObjectName("verticalLayout");
        cbDynamicConnectTime = new QCheckBox(ClientConfigDialog);
        cbDynamicConnectTime->setObjectName("cbDynamicConnectTime");

        verticalLayout->addWidget(cbDynamicConnectTime);

        cbLanguageSync = new QCheckBox(ClientConfigDialog);
        cbLanguageSync->setObjectName("cbLanguageSync");

        verticalLayout->addWidget(cbLanguageSync);

        groupBox = new QGroupBox(ClientConfigDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        cbYScrollInvert = new QCheckBox(groupBox);
        cbYScrollInvert->setObjectName("cbYScrollInvert");

        gridLayout->addWidget(cbYScrollInvert, 5, 2, 1, 1);

        cbXScrollInvert = new QCheckBox(groupBox);
        cbXScrollInvert->setObjectName("cbXScrollInvert");

        gridLayout->addWidget(cbXScrollInvert, 1, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblScrollSpeed = new QLabel(groupBox);
        lblScrollSpeed->setObjectName("lblScrollSpeed");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblScrollSpeed->sizePolicy().hasHeightForWidth());
        lblScrollSpeed->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(lblScrollSpeed);

        sbYScrollScale = new QDoubleSpinBox(groupBox);
        sbYScrollScale->setObjectName("sbYScrollScale");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sbYScrollScale->sizePolicy().hasHeightForWidth());
        sbYScrollScale->setSizePolicy(sizePolicy2);
        sbYScrollScale->setAccelerated(true);
        sbYScrollScale->setCorrectionMode(QAbstractSpinBox::CorrectionMode::CorrectToNearestValue);
        sbYScrollScale->setMinimum(0.100000000000000);
        sbYScrollScale->setMaximum(10.000000000000000);
        sbYScrollScale->setSingleStep(0.100000000000000);
        sbYScrollScale->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(sbYScrollScale);


        gridLayout->addLayout(horizontalLayout_2, 5, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblXScrollSpeed = new QLabel(groupBox);
        lblXScrollSpeed->setObjectName("lblXScrollSpeed");
        sizePolicy1.setHeightForWidth(lblXScrollSpeed->sizePolicy().hasHeightForWidth());
        lblXScrollSpeed->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lblXScrollSpeed);

        sbXScrollScale = new QDoubleSpinBox(groupBox);
        sbXScrollScale->setObjectName("sbXScrollScale");
        sizePolicy2.setHeightForWidth(sbXScrollScale->sizePolicy().hasHeightForWidth());
        sbXScrollScale->setSizePolicy(sizePolicy2);
        sbXScrollScale->setAccelerated(true);
        sbXScrollScale->setCorrectionMode(QAbstractSpinBox::CorrectionMode::CorrectToNearestValue);
        sbXScrollScale->setMinimum(0.100000000000000);
        sbXScrollScale->setMaximum(10.000000000000000);
        sbXScrollScale->setSingleStep(0.100000000000000);
        sbXScrollScale->setValue(1.000000000000000);

        horizontalLayout_3->addWidget(sbXScrollScale);


        gridLayout->addLayout(horizontalLayout_3, 1, 4, 1, 1);

        lblHScroll = new QLabel(groupBox);
        lblHScroll->setObjectName("lblHScroll");

        gridLayout->addWidget(lblHScroll, 1, 0, 1, 2);

        lblVScroll = new QLabel(groupBox);
        lblVScroll->setObjectName("lblVScroll");

        gridLayout->addWidget(lblVScroll, 5, 0, 1, 2);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(ClientConfigDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Reset|QDialogButtonBox::StandardButton::RestoreDefaults|QDialogButtonBox::StandardButton::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClientConfigDialog);

        QMetaObject::connectSlotsByName(ClientConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientConfigDialog)
    {
        ClientConfigDialog->setWindowTitle(QCoreApplication::translate("ClientConfigDialog", "Client Configuration", nullptr));
#if QT_CONFIG(tooltip)
        cbDynamicConnectTime->setToolTip(QCoreApplication::translate("ClientConfigDialog", "<html><head/><body><p>Allow the client to slow the rate it attempts to reconnect to the server when connections attempts are failing. The delay between connection attempts will  start at 1 second intervals and can be a maxium of 5 minutes between connection attempts.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbDynamicConnectTime->setText(QCoreApplication::translate("ClientConfigDialog", "Use dynamic reconnection time based on connection attempts", nullptr));
        cbLanguageSync->setText(QCoreApplication::translate("ClientConfigDialog", "Use server's keyboard language on this computer", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClientConfigDialog", "Scroll Modifiers", nullptr));
        cbYScrollInvert->setText(QCoreApplication::translate("ClientConfigDialog", "Invert", nullptr));
        cbXScrollInvert->setText(QCoreApplication::translate("ClientConfigDialog", "Invert", nullptr));
        lblScrollSpeed->setText(QCoreApplication::translate("ClientConfigDialog", "Scale", nullptr));
        lblXScrollSpeed->setText(QCoreApplication::translate("ClientConfigDialog", "Scale", nullptr));
        lblHScroll->setText(QCoreApplication::translate("ClientConfigDialog", "Horizontal Scroll", nullptr));
        lblVScroll->setText(QCoreApplication::translate("ClientConfigDialog", "Vertical Scroll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientConfigDialog: public Ui_ClientConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCONFIGDIALOG_H
