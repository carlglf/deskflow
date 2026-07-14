/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *topLevelWidget;
    QVBoxLayout *_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelComputerName;
    QLabel *lblComputerName;
    QLineEdit *lineEditName;
    QPushButton *btnEditName;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblIpAddresses;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widgetModeSelection;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbModeServer;
    QRadioButton *rbModeClient;
    QWidget *widgetModeOptions;
    QHBoxLayout *horizontalLayout_2;
    QWidget *serverOptions;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnConfigureServer;
    QPushButton *btnSaveServerConfig;
    QSpacerItem *horizontalSpacer;
    QLabel *lblNoMode;
    QWidget *clientOptions;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnConfigureClient;
    QSpacerItem *horizontalSpacer_3;
    QLabel *m_pLabelServerName;
    QLineEdit *lineHostname;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnToggleCore;
    QPushButton *btnRestartCore;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(971, 197);
        topLevelWidget = new QWidget(MainWindow);
        topLevelWidget->setObjectName("topLevelWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(topLevelWidget->sizePolicy().hasHeightForWidth());
        topLevelWidget->setSizePolicy(sizePolicy);
        _2 = new QVBoxLayout(topLevelWidget);
        _2->setSpacing(3);
        _2->setObjectName("_2");
        widget = new QWidget(topLevelWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 28));
        widget->setMaximumSize(QSize(16777215, 28));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(3, 3, 3, 3);
        labelComputerName = new QLabel(widget);
        labelComputerName->setObjectName("labelComputerName");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelComputerName->sizePolicy().hasHeightForWidth());
        labelComputerName->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(labelComputerName);

        lblComputerName = new QLabel(widget);
        lblComputerName->setObjectName("lblComputerName");
        sizePolicy1.setHeightForWidth(lblComputerName->sizePolicy().hasHeightForWidth());
        lblComputerName->setSizePolicy(sizePolicy1);
        lblComputerName->setText(QString::fromUtf8("lblName"));

        horizontalLayout_5->addWidget(lblComputerName);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName("lineEditName");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditName->sizePolicy().hasHeightForWidth());
        lineEditName->setSizePolicy(sizePolicy2);
        lineEditName->setMaxLength(255);
        lineEditName->setFrame(false);
        lineEditName->setClearButtonEnabled(false);

        horizontalLayout_5->addWidget(lineEditName);

        btnEditName = new QPushButton(widget);
        btnEditName->setObjectName("btnEditName");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnEditName->sizePolicy().hasHeightForWidth());
        btnEditName->setSizePolicy(sizePolicy3);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-edit")));
        btnEditName->setIcon(icon);
        btnEditName->setIconSize(QSize(16, 16));
        btnEditName->setFlat(true);

        horizontalLayout_5->addWidget(btnEditName);

        horizontalSpacer_2 = new QSpacerItem(6, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        lblIpAddresses = new QLabel(widget);
        lblIpAddresses->setObjectName("lblIpAddresses");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lblIpAddresses->sizePolicy().hasHeightForWidth());
        lblIpAddresses->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(lblIpAddresses);


        _2->addWidget(widget);

        groupBox = new QGroupBox(topLevelWidget);
        groupBox->setObjectName("groupBox");
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        widgetModeSelection = new QWidget(groupBox);
        widgetModeSelection->setObjectName("widgetModeSelection");
        sizePolicy.setHeightForWidth(widgetModeSelection->sizePolicy().hasHeightForWidth());
        widgetModeSelection->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widgetModeSelection);
        horizontalLayout->setObjectName("horizontalLayout");
        rbModeServer = new QRadioButton(widgetModeSelection);
        rbModeServer->setObjectName("rbModeServer");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(rbModeServer->sizePolicy().hasHeightForWidth());
        rbModeServer->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(rbModeServer);

        rbModeClient = new QRadioButton(widgetModeSelection);
        rbModeClient->setObjectName("rbModeClient");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(rbModeClient->sizePolicy().hasHeightForWidth());
        rbModeClient->setSizePolicy(sizePolicy6);

        horizontalLayout->addWidget(rbModeClient);


        verticalLayout->addWidget(widgetModeSelection);

        widgetModeOptions = new QWidget(groupBox);
        widgetModeOptions->setObjectName("widgetModeOptions");
        sizePolicy.setHeightForWidth(widgetModeOptions->sizePolicy().hasHeightForWidth());
        widgetModeOptions->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widgetModeOptions);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        serverOptions = new QWidget(widgetModeOptions);
        serverOptions->setObjectName("serverOptions");
        sizePolicy4.setHeightForWidth(serverOptions->sizePolicy().hasHeightForWidth());
        serverOptions->setSizePolicy(sizePolicy4);
        serverOptions->setMinimumSize(QSize(0, 32));
        serverOptions->setMaximumSize(QSize(16777215, 32));
        horizontalLayout_4 = new QHBoxLayout(serverOptions);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnConfigureServer = new QPushButton(serverOptions);
        btnConfigureServer->setObjectName("btnConfigureServer");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(btnConfigureServer->sizePolicy().hasHeightForWidth());
        btnConfigureServer->setSizePolicy(sizePolicy7);
        btnConfigureServer->setMinimumSize(QSize(0, 32));
        btnConfigureServer->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_4->addWidget(btnConfigureServer);

        btnSaveServerConfig = new QPushButton(serverOptions);
        btnSaveServerConfig->setObjectName("btnSaveServerConfig");
        sizePolicy3.setHeightForWidth(btnSaveServerConfig->sizePolicy().hasHeightForWidth());
        btnSaveServerConfig->setSizePolicy(sizePolicy3);
        btnSaveServerConfig->setMinimumSize(QSize(32, 32));
        btnSaveServerConfig->setMaximumSize(QSize(32, 32));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        btnSaveServerConfig->setIcon(icon1);

        horizontalLayout_4->addWidget(btnSaveServerConfig);

        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        horizontalLayout_2->addWidget(serverOptions);

        lblNoMode = new QLabel(widgetModeOptions);
        lblNoMode->setObjectName("lblNoMode");
        lblNoMode->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(lblNoMode);

        clientOptions = new QWidget(widgetModeOptions);
        clientOptions->setObjectName("clientOptions");
        sizePolicy.setHeightForWidth(clientOptions->sizePolicy().hasHeightForWidth());
        clientOptions->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(clientOptions);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnConfigureClient = new QPushButton(clientOptions);
        btnConfigureClient->setObjectName("btnConfigureClient");
        sizePolicy7.setHeightForWidth(btnConfigureClient->sizePolicy().hasHeightForWidth());
        btnConfigureClient->setSizePolicy(sizePolicy7);
        btnConfigureClient->setMinimumSize(QSize(0, 32));
        btnConfigureClient->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_3->addWidget(btnConfigureClient);

        horizontalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        m_pLabelServerName = new QLabel(clientOptions);
        m_pLabelServerName->setObjectName("m_pLabelServerName");
        sizePolicy.setHeightForWidth(m_pLabelServerName->sizePolicy().hasHeightForWidth());
        m_pLabelServerName->setSizePolicy(sizePolicy);
        m_pLabelServerName->setIndent(0);

        horizontalLayout_3->addWidget(m_pLabelServerName);

        lineHostname = new QLineEdit(clientOptions);
        lineHostname->setObjectName("lineHostname");
        lineHostname->setMinimumSize(QSize(0, 0));

        horizontalLayout_3->addWidget(lineHostname);


        horizontalLayout_2->addWidget(clientOptions);

        horizontalWidget = new QWidget(widgetModeOptions);
        horizontalWidget->setObjectName("horizontalWidget");
        sizePolicy4.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy4);
        horizontalWidget->setMinimumSize(QSize(0, 32));
        horizontalWidget->setMaximumSize(QSize(16777215, 32));
        horizontalLayout_6 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnToggleCore = new QPushButton(horizontalWidget);
        btnToggleCore->setObjectName("btnToggleCore");
        btnToggleCore->setEnabled(false);
        sizePolicy7.setHeightForWidth(btnToggleCore->sizePolicy().hasHeightForWidth());
        btnToggleCore->setSizePolicy(sizePolicy7);
        btnToggleCore->setMinimumSize(QSize(0, 32));
        btnToggleCore->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_6->addWidget(btnToggleCore);

        btnRestartCore = new QPushButton(horizontalWidget);
        btnRestartCore->setObjectName("btnRestartCore");
        btnRestartCore->setEnabled(false);
        sizePolicy3.setHeightForWidth(btnRestartCore->sizePolicy().hasHeightForWidth());
        btnRestartCore->setSizePolicy(sizePolicy3);
        btnRestartCore->setMinimumSize(QSize(32, 32));
        btnRestartCore->setMaximumSize(QSize(32, 32));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("view-refresh")));
        btnRestartCore->setIcon(icon2);

        horizontalLayout_6->addWidget(btnRestartCore);


        horizontalLayout_2->addWidget(horizontalWidget);


        verticalLayout->addWidget(widgetModeOptions);


        _2->addWidget(groupBox);

        MainWindow->setCentralWidget(topLevelWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        labelComputerName->setText(QCoreApplication::translate("MainWindow", "This computer's name:", nullptr));
#if QT_CONFIG(tooltip)
        lineEditName->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Name can't have have spaces or special characters</p><p>Use Enter to save the name change.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnEditName->setToolTip(QCoreApplication::translate("MainWindow", "Edit Computer Name", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QString());
        rbModeServer->setText(QCoreApplication::translate("MainWindow", "Use this computer's keyboard and mouse\n"
"(make this computer the server)", nullptr));
        rbModeClient->setText(QCoreApplication::translate("MainWindow", "Use another computer\342\200\231s mouse and keyboard\n"
"(make this computer the client)", nullptr));
        btnConfigureServer->setText(QCoreApplication::translate("MainWindow", "&Configure Server", nullptr));
#if QT_CONFIG(tooltip)
        btnSaveServerConfig->setToolTip(QCoreApplication::translate("MainWindow", "Export server configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        lblNoMode->setText(QCoreApplication::translate("MainWindow", "You must select a mode", nullptr));
        btnConfigureClient->setText(QCoreApplication::translate("MainWindow", "&Configure Client", nullptr));
        m_pLabelServerName->setText(QCoreApplication::translate("MainWindow", "Connect to:", nullptr));
#if QT_CONFIG(tooltip)
        lineHostname->setToolTip(QCoreApplication::translate("MainWindow", "<html>Hostname or IP address of the server computer.<br/>May contain a comma seperated list.</html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btnToggleCore->setText(QCoreApplication::translate("MainWindow", "&Start", nullptr));
#if QT_CONFIG(tooltip)
        btnRestartCore->setToolTip(QCoreApplication::translate("MainWindow", "Restart", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
