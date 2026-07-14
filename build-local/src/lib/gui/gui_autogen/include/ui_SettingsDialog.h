/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblLanguage;
    QComboBox *comboLanguage;
    QCheckBox *cbAutoUpdate;
    QCheckBox *cbPreventSleep;
    QFormLayout *formLayout;
    QRadioButton *rbIconColorful;
    QRadioButton *rbIconMono;
    QLabel *lblTrayIconStyle;
    QSpacerItem *verticalSpacer_3;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbShowOnStart;
    QRadioButton *rbAutoHide;
    QLabel *label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_13;
    QRadioButton *rbExitOnClose;
    QRadioButton *rbCloseToTray;
    QCheckBox *cbShowVersion;
    QSpacerItem *verticalSpacer_11;
    QWidget *tabLog;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblLogLevel;
    QComboBox *comboLogLevel;
    QLabel *lblDebugWarning;
    QGroupBox *groupLogToFile;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widgetLogFilename;
    QHBoxLayout *_4;
    QLabel *labelLogPath;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineLogFilename;
    QPushButton *btnBrowseLog;
    QCheckBox *cbGuiDebug;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QLabel *lblNetworkIp;
    QComboBox *comboInterface;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lblPort;
    QSpinBox *sbPort;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupSecurity;
    QVBoxLayout *_11;
    QWidget *widgetTlsCert;
    QHBoxLayout *_12;
    QLabel *lblTlsCertInfo;
    QLabel *lblTlsCert;
    QLineEdit *lineTlsCertPath;
    QPushButton *btnTlsCertPath;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblTlsKeyLength;
    QComboBox *comboTlsKeyLength;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnTlsRegenCert;
    QCheckBox *cbRequireClientCert;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QWidget *tabAdvanced;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *groupService;
    QGridLayout *_6;
    QCheckBox *cbElevateDaemon;
    QFormLayout *formLayout_3;
    QCheckBox *cbRunEnterCommand;
    QLineEdit *lineCommandEnter;
    QCheckBox *cbRunExitCommand;
    QLineEdit *lineCommandExit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->resize(490, 366);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SettingsDialog->sizePolicy().hasHeightForWidth());
        SettingsDialog->setSizePolicy(sizePolicy);
        SettingsDialog->setModal(true);
        verticalLayout_3 = new QVBoxLayout(SettingsDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName("tabWidget");
        tabGeneral = new QWidget();
        tabGeneral->setObjectName("tabGeneral");
        verticalLayout_6 = new QVBoxLayout(tabGeneral);
        verticalLayout_6->setSpacing(9);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(12, 0, 12, 0);
        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblLanguage = new QLabel(tabGeneral);
        lblLanguage->setObjectName("lblLanguage");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblLanguage->sizePolicy().hasHeightForWidth());
        lblLanguage->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lblLanguage);

        comboLanguage = new QComboBox(tabGeneral);
        comboLanguage->setObjectName("comboLanguage");

        horizontalLayout_3->addWidget(comboLanguage);


        verticalLayout_6->addLayout(horizontalLayout_3);

        cbAutoUpdate = new QCheckBox(tabGeneral);
        cbAutoUpdate->setObjectName("cbAutoUpdate");

        verticalLayout_6->addWidget(cbAutoUpdate);

        cbPreventSleep = new QCheckBox(tabGeneral);
        cbPreventSleep->setObjectName("cbPreventSleep");

        verticalLayout_6->addWidget(cbPreventSleep);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        rbIconColorful = new QRadioButton(tabGeneral);
        rbIconColorful->setObjectName("rbIconColorful");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, rbIconColorful);

        rbIconMono = new QRadioButton(tabGeneral);
        rbIconMono->setObjectName("rbIconMono");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, rbIconMono);

        lblTrayIconStyle = new QLabel(tabGeneral);
        lblTrayIconStyle->setObjectName("lblTrayIconStyle");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, lblTrayIconStyle);


        verticalLayout_6->addLayout(formLayout);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        tabWidget->addTab(tabGeneral, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName("tabWindow");
        verticalLayout_14 = new QVBoxLayout(tabWindow);
        verticalLayout_14->setSpacing(9);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(12, 0, 12, 0);
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_7);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setLabelAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_3 = new QLabel(tabWindow);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_3);

        widget = new QWidget(tabWindow);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        rbShowOnStart = new QRadioButton(widget);
        rbShowOnStart->setObjectName("rbShowOnStart");

        verticalLayout_2->addWidget(rbShowOnStart);

        rbAutoHide = new QRadioButton(widget);
        rbAutoHide->setObjectName("rbAutoHide");

        verticalLayout_2->addWidget(rbAutoHide);


        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, widget);

        label = new QLabel(tabWindow);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        widget_2 = new QWidget(tabWindow);
        widget_2->setObjectName("widget_2");
        verticalLayout_13 = new QVBoxLayout(widget_2);
        verticalLayout_13->setObjectName("verticalLayout_13");
        rbExitOnClose = new QRadioButton(widget_2);
        rbExitOnClose->setObjectName("rbExitOnClose");

        verticalLayout_13->addWidget(rbExitOnClose);

        rbCloseToTray = new QRadioButton(widget_2);
        rbCloseToTray->setObjectName("rbCloseToTray");

        verticalLayout_13->addWidget(rbCloseToTray);


        formLayout_2->setWidget(1, QFormLayout::ItemRole::FieldRole, widget_2);


        verticalLayout_14->addLayout(formLayout_2);

        cbShowVersion = new QCheckBox(tabWindow);
        cbShowVersion->setObjectName("cbShowVersion");

        verticalLayout_14->addWidget(cbShowVersion);

        verticalSpacer_11 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_11);

        tabWidget->addTab(tabWindow, QString());
        tabLog = new QWidget();
        tabLog->setObjectName("tabLog");
        verticalLayout = new QVBoxLayout(tabLog);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(12, 0, 12, 0);
        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lblLogLevel = new QLabel(tabLog);
        lblLogLevel->setObjectName("lblLogLevel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblLogLevel->sizePolicy().hasHeightForWidth());
        lblLogLevel->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(lblLogLevel);

        comboLogLevel = new QComboBox(tabLog);
        comboLogLevel->setObjectName("comboLogLevel");

        horizontalLayout_4->addWidget(comboLogLevel);


        verticalLayout->addLayout(horizontalLayout_4);

        lblDebugWarning = new QLabel(tabLog);
        lblDebugWarning->setObjectName("lblDebugWarning");
        lblDebugWarning->setWordWrap(true);

        verticalLayout->addWidget(lblDebugWarning);

        groupLogToFile = new QGroupBox(tabLog);
        groupLogToFile->setObjectName("groupLogToFile");
        groupLogToFile->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(groupLogToFile);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widgetLogFilename = new QWidget(groupLogToFile);
        widgetLogFilename->setObjectName("widgetLogFilename");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widgetLogFilename->sizePolicy().hasHeightForWidth());
        widgetLogFilename->setSizePolicy(sizePolicy3);
        _4 = new QHBoxLayout(widgetLogFilename);
        _4->setSpacing(3);
        _4->setObjectName("_4");
        _4->setContentsMargins(0, 0, 0, 0);
        labelLogPath = new QLabel(widgetLogFilename);
        labelLogPath->setObjectName("labelLogPath");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelLogPath->sizePolicy().hasHeightForWidth());
        labelLogPath->setSizePolicy(sizePolicy4);

        _4->addWidget(labelLogPath);

        horizontalSpacer_7 = new QSpacerItem(17, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        _4->addItem(horizontalSpacer_7);

        lineLogFilename = new QLineEdit(widgetLogFilename);
        lineLogFilename->setObjectName("lineLogFilename");
        lineLogFilename->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineLogFilename->sizePolicy().hasHeightForWidth());
        lineLogFilename->setSizePolicy(sizePolicy5);

        _4->addWidget(lineLogFilename);

        btnBrowseLog = new QPushButton(widgetLogFilename);
        btnBrowseLog->setObjectName("btnBrowseLog");
        btnBrowseLog->setEnabled(true);
        btnBrowseLog->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        btnBrowseLog->setIcon(icon);
        btnBrowseLog->setFlat(true);

        _4->addWidget(btnBrowseLog);


        horizontalLayout_2->addWidget(widgetLogFilename);


        verticalLayout->addWidget(groupLogToFile);

        cbGuiDebug = new QCheckBox(tabLog);
        cbGuiDebug->setObjectName("cbGuiDebug");

        verticalLayout->addWidget(cbGuiDebug);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        tabWidget->addTab(tabLog, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName("tabNetwork");
        verticalLayout_7 = new QVBoxLayout(tabNetwork);
        verticalLayout_7->setSpacing(9);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(12, 0, 12, 0);
        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblNetworkIp = new QLabel(tabNetwork);
        lblNetworkIp->setObjectName("lblNetworkIp");
        sizePolicy2.setHeightForWidth(lblNetworkIp->sizePolicy().hasHeightForWidth());
        lblNetworkIp->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(lblNetworkIp);

        comboInterface = new QComboBox(tabNetwork);
        comboInterface->addItem(QString());
        comboInterface->setObjectName("comboInterface");
        sizePolicy2.setHeightForWidth(comboInterface->sizePolicy().hasHeightForWidth());
        comboInterface->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(comboInterface);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lblPort = new QLabel(tabNetwork);
        lblPort->setObjectName("lblPort");
        sizePolicy2.setHeightForWidth(lblPort->sizePolicy().hasHeightForWidth());
        lblPort->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(lblPort);

        sbPort = new QSpinBox(tabNetwork);
        sbPort->setObjectName("sbPort");
        sbPort->setEnabled(true);
        sizePolicy2.setHeightForWidth(sbPort->sizePolicy().hasHeightForWidth());
        sbPort->setSizePolicy(sizePolicy2);
        sbPort->setMaximum(65535);
        sbPort->setValue(24800);

        horizontalLayout_6->addWidget(sbPort);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_7->addLayout(horizontalLayout_6);

        groupSecurity = new QGroupBox(tabNetwork);
        groupSecurity->setObjectName("groupSecurity");
        sizePolicy3.setHeightForWidth(groupSecurity->sizePolicy().hasHeightForWidth());
        groupSecurity->setSizePolicy(sizePolicy3);
        groupSecurity->setCheckable(true);
        groupSecurity->setChecked(false);
        _11 = new QVBoxLayout(groupSecurity);
        _11->setObjectName("_11");
        widgetTlsCert = new QWidget(groupSecurity);
        widgetTlsCert->setObjectName("widgetTlsCert");
        _12 = new QHBoxLayout(widgetTlsCert);
        _12->setObjectName("_12");
        _12->setContentsMargins(0, 0, 0, 0);
        lblTlsCertInfo = new QLabel(widgetTlsCert);
        lblTlsCertInfo->setObjectName("lblTlsCertInfo");
        lblTlsCertInfo->setText(QString::fromUtf8(""));

        _12->addWidget(lblTlsCertInfo);

        lblTlsCert = new QLabel(widgetTlsCert);
        lblTlsCert->setObjectName("lblTlsCert");
        sizePolicy4.setHeightForWidth(lblTlsCert->sizePolicy().hasHeightForWidth());
        lblTlsCert->setSizePolicy(sizePolicy4);

        _12->addWidget(lblTlsCert);

        lineTlsCertPath = new QLineEdit(widgetTlsCert);
        lineTlsCertPath->setObjectName("lineTlsCertPath");
        lineTlsCertPath->setMinimumSize(QSize(0, 0));

        _12->addWidget(lineTlsCertPath);

        btnTlsCertPath = new QPushButton(widgetTlsCert);
        btnTlsCertPath->setObjectName("btnTlsCertPath");
        btnTlsCertPath->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnTlsCertPath->setIcon(icon);
        btnTlsCertPath->setFlat(true);

        _12->addWidget(btnTlsCertPath);


        _11->addWidget(widgetTlsCert);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        lblTlsKeyLength = new QLabel(groupSecurity);
        lblTlsKeyLength->setObjectName("lblTlsKeyLength");
        sizePolicy4.setHeightForWidth(lblTlsKeyLength->sizePolicy().hasHeightForWidth());
        lblTlsKeyLength->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(lblTlsKeyLength);

        comboTlsKeyLength = new QComboBox(groupSecurity);
        comboTlsKeyLength->addItem(QString::fromUtf8("2048"));
        comboTlsKeyLength->addItem(QString::fromUtf8("4096"));
        comboTlsKeyLength->setObjectName("comboTlsKeyLength");

        horizontalLayout_5->addWidget(comboTlsKeyLength);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnTlsRegenCert = new QPushButton(groupSecurity);
        btnTlsRegenCert->setObjectName("btnTlsRegenCert");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ViewRefresh));
        btnTlsRegenCert->setIcon(icon1);

        horizontalLayout_5->addWidget(btnTlsRegenCert);


        _11->addLayout(horizontalLayout_5);

        cbRequireClientCert = new QCheckBox(groupSecurity);
        cbRequireClientCert->setObjectName("cbRequireClientCert");

        _11->addWidget(cbRequireClientCert);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        _11->addItem(verticalSpacer_2);


        verticalLayout_7->addWidget(groupSecurity);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        tabWidget->addTab(tabNetwork, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName("tabAdvanced");
        verticalLayout_4 = new QVBoxLayout(tabAdvanced);
        verticalLayout_4->setSpacing(9);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(12, 0, 12, 0);
        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        groupService = new QGroupBox(tabAdvanced);
        groupService->setObjectName("groupService");
        groupService->setEnabled(true);
        groupService->setCheckable(true);
        groupService->setChecked(false);
        _6 = new QGridLayout(groupService);
        _6->setObjectName("_6");
        cbElevateDaemon = new QCheckBox(groupService);
        cbElevateDaemon->setObjectName("cbElevateDaemon");
        cbElevateDaemon->setAutoExclusive(false);

        _6->addWidget(cbElevateDaemon, 1, 0, 1, 1);


        verticalLayout_4->addWidget(groupService);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy::ExpandingFieldsGrow);
        formLayout_3->setRowWrapPolicy(QFormLayout::RowWrapPolicy::DontWrapRows);
        formLayout_3->setLabelAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        formLayout_3->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        cbRunEnterCommand = new QCheckBox(tabAdvanced);
        cbRunEnterCommand->setObjectName("cbRunEnterCommand");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::LabelRole, cbRunEnterCommand);

        lineCommandEnter = new QLineEdit(tabAdvanced);
        lineCommandEnter->setObjectName("lineCommandEnter");

        formLayout_3->setWidget(0, QFormLayout::ItemRole::FieldRole, lineCommandEnter);

        cbRunExitCommand = new QCheckBox(tabAdvanced);
        cbRunExitCommand->setObjectName("cbRunExitCommand");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::LabelRole, cbRunExitCommand);

        lineCommandExit = new QLineEdit(tabAdvanced);
        lineCommandExit->setObjectName("lineCommandExit");

        formLayout_3->setWidget(1, QFormLayout::ItemRole::FieldRole, lineCommandExit);


        verticalLayout_4->addLayout(formLayout_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(tabAdvanced, QString());

        verticalLayout_3->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Reset|QDialogButtonBox::StandardButton::RestoreDefaults|QDialogButtonBox::StandardButton::Save);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(SettingsDialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Preferences", nullptr));
        lblLanguage->setText(QCoreApplication::translate("SettingsDialog", "Language", nullptr));
        cbAutoUpdate->setText(QCoreApplication::translate("SettingsDialog", "Check for updates on startup", nullptr));
        cbPreventSleep->setText(QCoreApplication::translate("SettingsDialog", "Prevent this computer from going to sleep", nullptr));
        rbIconColorful->setText(QCoreApplication::translate("SettingsDialog", "Colorful", nullptr));
        rbIconMono->setText(QCoreApplication::translate("SettingsDialog", "Monocolor", nullptr));
        lblTrayIconStyle->setText(QCoreApplication::translate("SettingsDialog", "Tray icon style", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QCoreApplication::translate("SettingsDialog", "&General", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsDialog", "When the application starts", nullptr));
        rbShowOnStart->setText(QCoreApplication::translate("SettingsDialog", "Show the main window", nullptr));
        rbAutoHide->setText(QCoreApplication::translate("SettingsDialog", "Send to background", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "When the main window is closed", nullptr));
        rbExitOnClose->setText(QCoreApplication::translate("SettingsDialog", "Exit", nullptr));
        rbCloseToTray->setText(QCoreApplication::translate("SettingsDialog", "Send to background", nullptr));
        cbShowVersion->setText(QCoreApplication::translate("SettingsDialog", "Include version in the window title", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWindow), QCoreApplication::translate("SettingsDialog", "&Window", nullptr));
        lblLogLevel->setText(QCoreApplication::translate("SettingsDialog", "Level", nullptr));
        lblDebugWarning->setText(QCoreApplication::translate("SettingsDialog", "Using a log level higher than Info may affect performance.", nullptr));
        groupLogToFile->setTitle(QCoreApplication::translate("SettingsDialog", "Log to file", nullptr));
        labelLogPath->setText(QCoreApplication::translate("SettingsDialog", "Log path", nullptr));
        btnBrowseLog->setText(QString());
        cbGuiDebug->setText(QCoreApplication::translate("SettingsDialog", "Enable GUI debug messages", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLog), QCoreApplication::translate("SettingsDialog", "&Logs", nullptr));
        lblNetworkIp->setText(QCoreApplication::translate("SettingsDialog", "Network IP", nullptr));
        comboInterface->setItemText(0, QCoreApplication::translate("SettingsDialog", "Automatic", nullptr));

        lblPort->setText(QCoreApplication::translate("SettingsDialog", "Port", nullptr));
        groupSecurity->setTitle(QCoreApplication::translate("SettingsDialog", "Enable TLS Encryption", nullptr));
        lblTlsCert->setText(QCoreApplication::translate("SettingsDialog", "Certificate", nullptr));
        btnTlsCertPath->setText(QString());
        lblTlsKeyLength->setText(QCoreApplication::translate("SettingsDialog", "Key length", nullptr));

        btnTlsRegenCert->setText(QCoreApplication::translate("SettingsDialog", "Regenerate certificate", nullptr));
        cbRequireClientCert->setText(QCoreApplication::translate("SettingsDialog", "Require client certificates", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QCoreApplication::translate("SettingsDialog", "&Network", nullptr));
        groupService->setTitle(QCoreApplication::translate("SettingsDialog", "Use background service (daemon)", nullptr));
        cbElevateDaemon->setText(QCoreApplication::translate("SettingsDialog", "Always run as system (work at login screen and UAC)", nullptr));
        cbRunEnterCommand->setText(QCoreApplication::translate("SettingsDialog", "Run command on enter", nullptr));
        cbRunExitCommand->setText(QCoreApplication::translate("SettingsDialog", "Run command on exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QCoreApplication::translate("SettingsDialog", "&Advanced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
