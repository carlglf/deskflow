/********************************************************************************
** Form generated from reading UI file 'ServerConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERCONFIGDIALOG_H
#define UI_SERVERCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/NewScreenWidget.h"
#include "widgets/ScreenSetupView.h"
#include "widgets/TrashScreenWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ServerConfigDialog
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tabComputers;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *layoutComputers;
    TrashScreenWidget *lblRemoveScreen;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_22;
    NewScreenWidget *lblNewScreen;
    QSpacerItem *verticalSpacer;
    ScreenSetupView *screenSetupView;
    QWidget *tabHotkeys;
    QHBoxLayout *_2;
    QGroupBox *groupHotkeys;
    QGridLayout *_3;
    QListWidget *listHotkeys;
    QPushButton *btnNewHotkey;
    QPushButton *btnEditHotkey;
    QPushButton *btnRemoveHotkey;
    QSpacerItem *hotkeySpacer;
    QGroupBox *groupActions;
    QGridLayout *gridLayout;
    QListWidget *listActions;
    QPushButton *btnNewAction;
    QPushButton *btnEditAction;
    QPushButton *btnRemoveAction;
    QSpacerItem *actionSpacer;
    QWidget *tabAdvanced;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupMisc;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *cbDisableLockToComputer;
    QCheckBox *cbDefaultLockToComputerState;
    QCheckBox *cbRelativeMouseMoves;
    QCheckBox *cbWin32KeepForeground;
    QHBoxLayout *layoutClipboard;
    QCheckBox *cbEnableClipboard;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QSpinBox *sbClipboardSizeLimit;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupSwitch;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *_5;
    QCheckBox *cbSwitchDelay;
    QSpacerItem *spacerSwitchWait;
    QSpinBox *sbSwitchDelay;
    QSpacerItem *spacerSwitchWait_2;
    QHBoxLayout *_6;
    QCheckBox *cbSwitchDoubleTap;
    QSpacerItem *spacerDoubleTap;
    QSpinBox *sbSwitchDoubleTap;
    QSpacerItem *spacerDoubleTap_2;
    QGroupBox *groupNetwork;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetHeartbeat;
    QHBoxLayout *groupHeartbeat;
    QCheckBox *cbHeartbeat;
    QSpacerItem *spacerNetwork;
    QSpinBox *sbHeartbeat;
    QSpacerItem *spacerNetwork_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelProtocol;
    QRadioButton *rbProtocolSynergy;
    QRadioButton *rbProtocolBarrier;
    QWidget *tabConfigFile;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupExternalConfig;
    QHBoxLayout *horizontalLayout;
    QWidget *widgetExternalConfigControls;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelConfigFile;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineConfigFile;
    QPushButton *btnBrowseConfigFile;
    QSpacerItem *verticalSpacer_1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ServerConfigDialog)
    {
        if (ServerConfigDialog->objectName().isEmpty())
            ServerConfigDialog->setObjectName("ServerConfigDialog");
        ServerConfigDialog->resize(724, 586);
        ServerConfigDialog->setMinimumSize(QSize(0, 0));
        vboxLayout = new QVBoxLayout(ServerConfigDialog);
        vboxLayout->setObjectName("vboxLayout");
        tabWidget = new QTabWidget(ServerConfigDialog);
        tabWidget->setObjectName("tabWidget");
        tabComputers = new QWidget();
        tabComputers->setObjectName("tabComputers");
        vboxLayout1 = new QVBoxLayout(tabComputers);
        vboxLayout1->setObjectName("vboxLayout1");
        vboxLayout1->setContentsMargins(6, 5, 6, 5);
        layoutComputers = new QHBoxLayout();
        layoutComputers->setSpacing(6);
        layoutComputers->setObjectName("layoutComputers");
        lblRemoveScreen = new TrashScreenWidget(tabComputers);
        lblRemoveScreen->setObjectName("lblRemoveScreen");
        lblRemoveScreen->setAcceptDrops(true);
        lblRemoveScreen->setFrameShape(QFrame::Shape::StyledPanel);
        lblRemoveScreen->setFrameShadow(QFrame::Shadow::Raised);

        layoutComputers->addWidget(lblRemoveScreen);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutComputers->addItem(horizontalSpacer_21);

        label_2 = new QLabel(tabComputers);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(310, 16777215));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(true);
        label_2->setIndent(-1);

        layoutComputers->addWidget(label_2);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutComputers->addItem(horizontalSpacer_22);

        lblNewScreen = new NewScreenWidget(tabComputers);
        lblNewScreen->setObjectName("lblNewScreen");
        lblNewScreen->setFrameShape(QFrame::Shape::StyledPanel);
        lblNewScreen->setFrameShadow(QFrame::Shadow::Raised);

        layoutComputers->addWidget(lblNewScreen);


        vboxLayout1->addLayout(layoutComputers);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        vboxLayout1->addItem(verticalSpacer);

        screenSetupView = new ScreenSetupView(tabComputers);
        screenSetupView->setObjectName("screenSetupView");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(screenSetupView->sizePolicy().hasHeightForWidth());
        screenSetupView->setSizePolicy(sizePolicy1);
        screenSetupView->setAcceptDrops(true);
        screenSetupView->setAutoFillBackground(false);

        vboxLayout1->addWidget(screenSetupView);

        tabWidget->addTab(tabComputers, QString());
        tabHotkeys = new QWidget();
        tabHotkeys->setObjectName("tabHotkeys");
        _2 = new QHBoxLayout(tabHotkeys);
        _2->setObjectName("_2");
        groupHotkeys = new QGroupBox(tabHotkeys);
        groupHotkeys->setObjectName("groupHotkeys");
        _3 = new QGridLayout(groupHotkeys);
        _3->setObjectName("_3");
        listHotkeys = new QListWidget(groupHotkeys);
        listHotkeys->setObjectName("listHotkeys");

        _3->addWidget(listHotkeys, 0, 0, 4, 1);

        btnNewHotkey = new QPushButton(groupHotkeys);
        btnNewHotkey->setObjectName("btnNewHotkey");
        btnNewHotkey->setEnabled(true);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        btnNewHotkey->setIcon(icon);

        _3->addWidget(btnNewHotkey, 0, 1, 1, 1);

        btnEditHotkey = new QPushButton(groupHotkeys);
        btnEditHotkey->setObjectName("btnEditHotkey");
        btnEditHotkey->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("document-edit")));
        btnEditHotkey->setIcon(icon1);

        _3->addWidget(btnEditHotkey, 1, 1, 1, 1);

        btnRemoveHotkey = new QPushButton(groupHotkeys);
        btnRemoveHotkey->setObjectName("btnRemoveHotkey");
        btnRemoveHotkey->setEnabled(false);
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ListRemove));
        btnRemoveHotkey->setIcon(icon2);

        _3->addWidget(btnRemoveHotkey, 2, 1, 1, 1);

        hotkeySpacer = new QSpacerItem(75, 161, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        _3->addItem(hotkeySpacer, 3, 1, 1, 1);


        _2->addWidget(groupHotkeys);

        groupActions = new QGroupBox(tabHotkeys);
        groupActions->setObjectName("groupActions");
        QFont font;
        font.setKerning(true);
        groupActions->setFont(font);
        gridLayout = new QGridLayout(groupActions);
        gridLayout->setObjectName("gridLayout");
        listActions = new QListWidget(groupActions);
        listActions->setObjectName("listActions");

        gridLayout->addWidget(listActions, 0, 0, 4, 1);

        btnNewAction = new QPushButton(groupActions);
        btnNewAction->setObjectName("btnNewAction");
        btnNewAction->setEnabled(false);
        btnNewAction->setIcon(icon);

        gridLayout->addWidget(btnNewAction, 0, 1, 1, 1);

        btnEditAction = new QPushButton(groupActions);
        btnEditAction->setObjectName("btnEditAction");
        btnEditAction->setEnabled(false);
        btnEditAction->setIcon(icon1);

        gridLayout->addWidget(btnEditAction, 1, 1, 1, 1);

        btnRemoveAction = new QPushButton(groupActions);
        btnRemoveAction->setObjectName("btnRemoveAction");
        btnRemoveAction->setEnabled(false);
        btnRemoveAction->setIcon(icon2);

        gridLayout->addWidget(btnRemoveAction, 2, 1, 1, 1);

        actionSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(actionSpacer, 3, 1, 1, 1);


        _2->addWidget(groupActions);

        tabWidget->addTab(tabHotkeys, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName("tabAdvanced");
        verticalLayout_2 = new QVBoxLayout(tabAdvanced);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(15, 15, 15, 15);
        groupMisc = new QGroupBox(tabAdvanced);
        groupMisc->setObjectName("groupMisc");
        QFont font1;
        font1.setKerning(false);
        groupMisc->setFont(font1);
        verticalLayout_4 = new QVBoxLayout(groupMisc);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(6, 6, 6, 6);
        cbDisableLockToComputer = new QCheckBox(groupMisc);
        cbDisableLockToComputer->setObjectName("cbDisableLockToComputer");

        verticalLayout_4->addWidget(cbDisableLockToComputer);

        cbDefaultLockToComputerState = new QCheckBox(groupMisc);
        cbDefaultLockToComputerState->setObjectName("cbDefaultLockToComputerState");

        verticalLayout_4->addWidget(cbDefaultLockToComputerState);

        cbRelativeMouseMoves = new QCheckBox(groupMisc);
        cbRelativeMouseMoves->setObjectName("cbRelativeMouseMoves");
        cbRelativeMouseMoves->setEnabled(true);

        verticalLayout_4->addWidget(cbRelativeMouseMoves);

        cbWin32KeepForeground = new QCheckBox(groupMisc);
        cbWin32KeepForeground->setObjectName("cbWin32KeepForeground");
        cbWin32KeepForeground->setEnabled(true);

        verticalLayout_4->addWidget(cbWin32KeepForeground);

        layoutClipboard = new QHBoxLayout();
        layoutClipboard->setObjectName("layoutClipboard");
        cbEnableClipboard = new QCheckBox(groupMisc);
        cbEnableClipboard->setObjectName("cbEnableClipboard");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbEnableClipboard->sizePolicy().hasHeightForWidth());
        cbEnableClipboard->setSizePolicy(sizePolicy2);
        cbEnableClipboard->setChecked(true);

        layoutClipboard->addWidget(cbEnableClipboard);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        layoutClipboard->addItem(horizontalSpacer);

        label_7 = new QLabel(groupMisc);
        label_7->setObjectName("label_7");

        layoutClipboard->addWidget(label_7);

        sbClipboardSizeLimit = new QSpinBox(groupMisc);
        sbClipboardSizeLimit->setObjectName("sbClipboardSizeLimit");
        sbClipboardSizeLimit->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sbClipboardSizeLimit->sizePolicy().hasHeightForWidth());
        sbClipboardSizeLimit->setSizePolicy(sizePolicy3);
        sbClipboardSizeLimit->setMaximum(10000);
        sbClipboardSizeLimit->setValue(3);

        layoutClipboard->addWidget(sbClipboardSizeLimit);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        layoutClipboard->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(layoutClipboard);


        verticalLayout_2->addWidget(groupMisc);

        groupSwitch = new QGroupBox(tabAdvanced);
        groupSwitch->setObjectName("groupSwitch");
        groupSwitch->setFont(font);
        vboxLayout2 = new QVBoxLayout(groupSwitch);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName("vboxLayout2");
        vboxLayout2->setContentsMargins(6, 6, 6, 6);
        _5 = new QHBoxLayout();
        _5->setObjectName("_5");
        cbSwitchDelay = new QCheckBox(groupSwitch);
        cbSwitchDelay->setObjectName("cbSwitchDelay");
        cbSwitchDelay->setEnabled(true);

        _5->addWidget(cbSwitchDelay);

        spacerSwitchWait = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _5->addItem(spacerSwitchWait);

        sbSwitchDelay = new QSpinBox(groupSwitch);
        sbSwitchDelay->setObjectName("sbSwitchDelay");
        sbSwitchDelay->setEnabled(false);
        sizePolicy3.setHeightForWidth(sbSwitchDelay->sizePolicy().hasHeightForWidth());
        sbSwitchDelay->setSizePolicy(sizePolicy3);
        sbSwitchDelay->setMinimum(10);
        sbSwitchDelay->setMaximum(10000);
        sbSwitchDelay->setSingleStep(10);
        sbSwitchDelay->setValue(250);

        _5->addWidget(sbSwitchDelay);

        spacerSwitchWait_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        _5->addItem(spacerSwitchWait_2);


        vboxLayout2->addLayout(_5);

        _6 = new QHBoxLayout();
        _6->setObjectName("_6");
        cbSwitchDoubleTap = new QCheckBox(groupSwitch);
        cbSwitchDoubleTap->setObjectName("cbSwitchDoubleTap");
        cbSwitchDoubleTap->setEnabled(true);

        _6->addWidget(cbSwitchDoubleTap);

        spacerDoubleTap = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _6->addItem(spacerDoubleTap);

        sbSwitchDoubleTap = new QSpinBox(groupSwitch);
        sbSwitchDoubleTap->setObjectName("sbSwitchDoubleTap");
        sbSwitchDoubleTap->setEnabled(false);
        sizePolicy3.setHeightForWidth(sbSwitchDoubleTap->sizePolicy().hasHeightForWidth());
        sbSwitchDoubleTap->setSizePolicy(sizePolicy3);
        sbSwitchDoubleTap->setMinimum(10);
        sbSwitchDoubleTap->setMaximum(10000);
        sbSwitchDoubleTap->setSingleStep(10);
        sbSwitchDoubleTap->setValue(250);

        _6->addWidget(sbSwitchDoubleTap);

        spacerDoubleTap_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        _6->addItem(spacerDoubleTap_2);


        vboxLayout2->addLayout(_6);


        verticalLayout_2->addWidget(groupSwitch);

        groupNetwork = new QGroupBox(tabAdvanced);
        groupNetwork->setObjectName("groupNetwork");
        verticalLayout_5 = new QVBoxLayout(groupNetwork);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        widgetHeartbeat = new QWidget(groupNetwork);
        widgetHeartbeat->setObjectName("widgetHeartbeat");
        groupHeartbeat = new QHBoxLayout(widgetHeartbeat);
        groupHeartbeat->setSpacing(9);
        groupHeartbeat->setObjectName("groupHeartbeat");
        groupHeartbeat->setContentsMargins(1, -1, -1, -1);
        cbHeartbeat = new QCheckBox(widgetHeartbeat);
        cbHeartbeat->setObjectName("cbHeartbeat");
        cbHeartbeat->setEnabled(true);

        groupHeartbeat->addWidget(cbHeartbeat);

        spacerNetwork = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        groupHeartbeat->addItem(spacerNetwork);

        sbHeartbeat = new QSpinBox(widgetHeartbeat);
        sbHeartbeat->setObjectName("sbHeartbeat");
        sbHeartbeat->setEnabled(false);
        sizePolicy3.setHeightForWidth(sbHeartbeat->sizePolicy().hasHeightForWidth());
        sbHeartbeat->setSizePolicy(sizePolicy3);
        sbHeartbeat->setMinimum(1000);
        sbHeartbeat->setMaximum(30000);
        sbHeartbeat->setSingleStep(1000);
        sbHeartbeat->setValue(5000);

        groupHeartbeat->addWidget(sbHeartbeat);

        spacerNetwork_2 = new QSpacerItem(50, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        groupHeartbeat->addItem(spacerNetwork_2);


        verticalLayout_5->addWidget(widgetHeartbeat);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelProtocol = new QLabel(groupNetwork);
        labelProtocol->setObjectName("labelProtocol");

        horizontalLayout_5->addWidget(labelProtocol);

        rbProtocolSynergy = new QRadioButton(groupNetwork);
        rbProtocolSynergy->setObjectName("rbProtocolSynergy");
        rbProtocolSynergy->setText(QString::fromUtf8("Synergy"));
        rbProtocolSynergy->setChecked(true);

        horizontalLayout_5->addWidget(rbProtocolSynergy);

        rbProtocolBarrier = new QRadioButton(groupNetwork);
        rbProtocolBarrier->setObjectName("rbProtocolBarrier");
        rbProtocolBarrier->setText(QString::fromUtf8("Barrier"));

        horizontalLayout_5->addWidget(rbProtocolBarrier);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(groupNetwork);

        tabWidget->addTab(tabAdvanced, QString());
        tabConfigFile = new QWidget();
        tabConfigFile->setObjectName("tabConfigFile");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tabConfigFile->sizePolicy().hasHeightForWidth());
        tabConfigFile->setSizePolicy(sizePolicy4);
        verticalLayout = new QVBoxLayout(tabConfigFile);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        label_5 = new QLabel(tabConfigFile);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_5->setFont(font2);
        label_5->setTextFormat(Qt::TextFormat::PlainText);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(tabConfigFile);
        label_6->setObjectName("label_6");
        label_6->setTextFormat(Qt::TextFormat::MarkdownText);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6->setWordWrap(true);

        verticalLayout->addWidget(label_6);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer_4);

        groupExternalConfig = new QGroupBox(tabConfigFile);
        groupExternalConfig->setObjectName("groupExternalConfig");
        groupExternalConfig->setCheckable(true);
        groupExternalConfig->setChecked(false);
        horizontalLayout = new QHBoxLayout(groupExternalConfig);
        horizontalLayout->setObjectName("horizontalLayout");
        widgetExternalConfigControls = new QWidget(groupExternalConfig);
        widgetExternalConfigControls->setObjectName("widgetExternalConfigControls");
        widgetExternalConfigControls->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(widgetExternalConfigControls);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelConfigFile = new QLabel(widgetExternalConfigControls);
        labelConfigFile->setObjectName("labelConfigFile");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelConfigFile->sizePolicy().hasHeightForWidth());
        labelConfigFile->setSizePolicy(sizePolicy5);
        labelConfigFile->setMinimumSize(QSize(96, 0));

        horizontalLayout_2->addWidget(labelConfigFile);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        lineConfigFile = new QLineEdit(widgetExternalConfigControls);
        lineConfigFile->setObjectName("lineConfigFile");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lineConfigFile->sizePolicy().hasHeightForWidth());
        lineConfigFile->setSizePolicy(sizePolicy6);
        lineConfigFile->setMinimumSize(QSize(180, 0));

        horizontalLayout_2->addWidget(lineConfigFile);

        btnBrowseConfigFile = new QPushButton(widgetExternalConfigControls);
        btnBrowseConfigFile->setObjectName("btnBrowseConfigFile");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(btnBrowseConfigFile->sizePolicy().hasHeightForWidth());
        btnBrowseConfigFile->setSizePolicy(sizePolicy7);
        btnBrowseConfigFile->setMinimumSize(QSize(0, 0));
        btnBrowseConfigFile->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btnBrowseConfigFile->setFlat(true);

        horizontalLayout_2->addWidget(btnBrowseConfigFile);


        horizontalLayout->addWidget(widgetExternalConfigControls);


        verticalLayout->addWidget(groupExternalConfig);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_1);

        tabWidget->addTab(tabConfigFile, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(ServerConfigDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        vboxLayout->addWidget(buttonBox);

        QWidget::setTabOrder(screenSetupView, listHotkeys);
        QWidget::setTabOrder(listHotkeys, btnNewHotkey);
        QWidget::setTabOrder(btnNewHotkey, btnEditHotkey);
        QWidget::setTabOrder(btnEditHotkey, btnRemoveHotkey);
        QWidget::setTabOrder(btnRemoveHotkey, listActions);
        QWidget::setTabOrder(listActions, btnNewAction);
        QWidget::setTabOrder(btnNewAction, btnEditAction);
        QWidget::setTabOrder(btnEditAction, btnRemoveAction);
        QWidget::setTabOrder(btnRemoveAction, cbSwitchDelay);
        QWidget::setTabOrder(cbSwitchDelay, sbSwitchDelay);
        QWidget::setTabOrder(sbSwitchDelay, cbSwitchDoubleTap);
        QWidget::setTabOrder(cbSwitchDoubleTap, sbSwitchDoubleTap);
        QWidget::setTabOrder(sbSwitchDoubleTap, cbEnableClipboard);
        QWidget::setTabOrder(cbEnableClipboard, sbClipboardSizeLimit);
        QWidget::setTabOrder(sbClipboardSizeLimit, cbHeartbeat);
        QWidget::setTabOrder(cbHeartbeat, sbHeartbeat);
        QWidget::setTabOrder(sbHeartbeat, cbRelativeMouseMoves);
        QWidget::setTabOrder(cbRelativeMouseMoves, tabWidget);

        retranslateUi(ServerConfigDialog);

        QMetaObject::connectSlotsByName(ServerConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ServerConfigDialog)
    {
        ServerConfigDialog->setWindowTitle(QCoreApplication::translate("ServerConfigDialog", "Server Configuration", nullptr));
#if QT_CONFIG(tooltip)
        lblRemoveScreen->setToolTip(QCoreApplication::translate("ServerConfigDialog", "Drag a computer from the grid to the trashcan to remove it.", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("ServerConfigDialog", "Configure the layout of your computer displays by dragging to where you want.", nullptr));
#if QT_CONFIG(tooltip)
        lblNewScreen->setToolTip(QCoreApplication::translate("ServerConfigDialog", "Drag to the grid to add a new computer.", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tabComputers), QCoreApplication::translate("ServerConfigDialog", "Computers", nullptr));
        groupHotkeys->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Hotkeys", nullptr));
        btnNewHotkey->setText(QCoreApplication::translate("ServerConfigDialog", "&New", nullptr));
        btnEditHotkey->setText(QCoreApplication::translate("ServerConfigDialog", "&Edit", nullptr));
        btnRemoveHotkey->setText(QCoreApplication::translate("ServerConfigDialog", "&Remove", nullptr));
        groupActions->setTitle(QCoreApplication::translate("ServerConfigDialog", "A&ctions", nullptr));
        btnNewAction->setText(QCoreApplication::translate("ServerConfigDialog", "Ne&w", nullptr));
        btnEditAction->setText(QCoreApplication::translate("ServerConfigDialog", "E&dit", nullptr));
        btnRemoveAction->setText(QCoreApplication::translate("ServerConfigDialog", "Re&move", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabHotkeys), QCoreApplication::translate("ServerConfigDialog", "Hotkeys", nullptr));
        groupMisc->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Misc", nullptr));
        cbDisableLockToComputer->setText(QCoreApplication::translate("ServerConfigDialog", "Disable lock to computer (scroll lock key)", nullptr));
        cbDefaultLockToComputerState->setText(QCoreApplication::translate("ServerConfigDialog", "Enable lock to computer at startup", nullptr));
        cbRelativeMouseMoves->setText(QCoreApplication::translate("ServerConfigDialog", "Use &relative mouse movements", nullptr));
        cbWin32KeepForeground->setText(QCoreApplication::translate("ServerConfigDialog", "Don't take &foreground window (Windows only)", nullptr));
        cbEnableClipboard->setText(QCoreApplication::translate("ServerConfigDialog", "Enable clipboard sharing", nullptr));
        label_7->setText(QCoreApplication::translate("ServerConfigDialog", "Limit to:", nullptr));
        sbClipboardSizeLimit->setSuffix(QCoreApplication::translate("ServerConfigDialog", "MB", nullptr));
        groupSwitch->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Switching", nullptr));
        cbSwitchDelay->setText(QCoreApplication::translate("ServerConfigDialog", "Switch &after waiting", nullptr));
        sbSwitchDelay->setSuffix(QCoreApplication::translate("ServerConfigDialog", "ms", nullptr));
        cbSwitchDoubleTap->setText(QCoreApplication::translate("ServerConfigDialog", "Switch on double &tap within", nullptr));
        sbSwitchDoubleTap->setSuffix(QCoreApplication::translate("ServerConfigDialog", "ms", nullptr));
        groupNetwork->setTitle(QCoreApplication::translate("ServerConfigDialog", "&Network", nullptr));
#if QT_CONFIG(whatsthis)
        cbHeartbeat->setWhatsThis(QCoreApplication::translate("ServerConfigDialog", "<html><head/><body><p>Enables the network heartbeat to ping clients every <span style=\" font-style:italic;\">n</span> seconds. This may help to diagnose network problems by retrying the connection if the client becomes unresponsive.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        cbHeartbeat->setText(QCoreApplication::translate("ServerConfigDialog", "&Check clients every", nullptr));
        sbHeartbeat->setSuffix(QCoreApplication::translate("ServerConfigDialog", "ms", nullptr));
#if QT_CONFIG(whatsthis)
        labelProtocol->setWhatsThis(QCoreApplication::translate("ServerConfigDialog", "<html><head/><body><p>Enables compatibility with programs that use either the Synergy or Barrier protocols:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Synergy 3 uses the Synergy protocol.</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Barrier, Input-Leap and Synergy 1 uses the Barrier protocol.</li></ul><p>A Deskflow client will automatically use either the Synergy or Barrier protocol depending on the server protocol.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelProtocol->setText(QCoreApplication::translate("ServerConfigDialog", "Network protocol", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QCoreApplication::translate("ServerConfigDialog", "Advanced", nullptr));
        label_5->setText(QCoreApplication::translate("ServerConfigDialog", "Core server config file", nullptr));
        label_6->setText(QCoreApplication::translate("ServerConfigDialog", "Use a server config file to create complex computer layouts that are not possible with the simple grid-based computer layout editor.\n"
"\n"
"Enabling this setting will disable the server config GUI.", nullptr));
        groupExternalConfig->setTitle(QCoreApplication::translate("ServerConfigDialog", "Use a server config file", nullptr));
        labelConfigFile->setText(QCoreApplication::translate("ServerConfigDialog", "Config file path", nullptr));
        btnBrowseConfigFile->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabConfigFile), QCoreApplication::translate("ServerConfigDialog", "Config file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerConfigDialog: public Ui_ServerConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERCONFIGDIALOG_H
