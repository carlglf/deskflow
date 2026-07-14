/********************************************************************************
** Form generated from reading UI file 'ScreenSettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSETTINGSDIALOG_H
#define UI_SCREENSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScreenSettingsDialog
{
public:
    QVBoxLayout *_2;
    QGroupBox *groupComputerName;
    QVBoxLayout *_3;
    QHBoxLayout *_4;
    QLabel *label_7;
    QLineEdit *lineNameEdit;
    QLabel *lblNameError;
    QHBoxLayout *layoutOptions;
    QVBoxLayout *layoutLeftSide;
    QGroupBox *groupModifers;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QComboBox *comboMeta;
    QComboBox *comboShift;
    QLabel *label_2;
    QComboBox *comboAlt;
    QComboBox *comboSuper;
    QComboBox *comboCtrl;
    QLabel *labelAltGr;
    QComboBox *comboAltGr;
    QPushButton *btnModifierKeys;
    QGroupBox *groupDeadCorners;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *layoutDeadCornersTop;
    QCheckBox *chkDeadTopLeft;
    QCheckBox *chkDeadTopRight;
    QHBoxLayout *layoutCornerSize;
    QLabel *label;
    QSpinBox *sbSwitchCornerSize;
    QHBoxLayout *layoutDeadCornersBottom;
    QCheckBox *chkDeadBottomLeft;
    QCheckBox *chkDeadBottomRight;
    QVBoxLayout *layoutRightSide;
    QGroupBox *groupFixes;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkFixScrollLock;
    QCheckBox *chkFixCapsLock;
    QCheckBox *chkFixNumLock;
    QCheckBox *chkFixXTest;
    QGroupBox *groupAliases;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineAddAlias;
    QPushButton *btnAddAlias;
    QLabel *lblAliasError;
    QListWidget *listAliases;
    QPushButton *btnRemoveAlias;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ScreenSettingsDialog)
    {
        if (ScreenSettingsDialog->objectName().isEmpty())
            ScreenSettingsDialog->setObjectName("ScreenSettingsDialog");
        ScreenSettingsDialog->resize(503, 558);
        _2 = new QVBoxLayout(ScreenSettingsDialog);
        _2->setObjectName("_2");
        groupComputerName = new QGroupBox(ScreenSettingsDialog);
        groupComputerName->setObjectName("groupComputerName");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupComputerName->sizePolicy().hasHeightForWidth());
        groupComputerName->setSizePolicy(sizePolicy);
        _3 = new QVBoxLayout(groupComputerName);
        _3->setObjectName("_3");
        _4 = new QHBoxLayout();
        _4->setObjectName("_4");
        label_7 = new QLabel(groupComputerName);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        _4->addWidget(label_7);

        lineNameEdit = new QLineEdit(groupComputerName);
        lineNameEdit->setObjectName("lineNameEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineNameEdit->sizePolicy().hasHeightForWidth());
        lineNameEdit->setSizePolicy(sizePolicy2);
        lineNameEdit->setMaxLength(255);

        _4->addWidget(lineNameEdit);


        _3->addLayout(_4);

        lblNameError = new QLabel(groupComputerName);
        lblNameError->setObjectName("lblNameError");
        sizePolicy1.setHeightForWidth(lblNameError->sizePolicy().hasHeightForWidth());
        lblNameError->setSizePolicy(sizePolicy1);
        lblNameError->setMinimumSize(QSize(0, 0));
        lblNameError->setText(QString::fromUtf8("lblNameError"));
        lblNameError->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        _3->addWidget(lblNameError);


        _2->addWidget(groupComputerName);

        layoutOptions = new QHBoxLayout();
        layoutOptions->setObjectName("layoutOptions");
        layoutLeftSide = new QVBoxLayout();
        layoutLeftSide->setObjectName("layoutLeftSide");
        groupModifers = new QGroupBox(ScreenSettingsDialog);
        groupModifers->setObjectName("groupModifers");
        formLayout_2 = new QFormLayout(groupModifers);
        formLayout_2->setObjectName("formLayout_2");
        label_5 = new QLabel(groupModifers);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(40, 16777215));

        formLayout_2->setWidget(0, QFormLayout::ItemRole::LabelRole, label_5);

        label_3 = new QLabel(groupModifers);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::LabelRole, label_3);

        label_6 = new QLabel(groupModifers);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(6, QFormLayout::ItemRole::LabelRole, label_6);

        label_4 = new QLabel(groupModifers);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(9, QFormLayout::ItemRole::LabelRole, label_4);

        comboMeta = new QComboBox(groupModifers);
        comboMeta->addItem(QString());
        comboMeta->addItem(QString());
        comboMeta->addItem(QString());
        comboMeta->addItem(QString());
        comboMeta->addItem(QString());
        comboMeta->addItem(QString());
        comboMeta->addItem(QString());
        comboMeta->setObjectName("comboMeta");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::FieldRole, comboMeta);

        comboShift = new QComboBox(groupModifers);
        comboShift->addItem(QString());
        comboShift->addItem(QString());
        comboShift->addItem(QString());
        comboShift->addItem(QString());
        comboShift->addItem(QString());
        comboShift->addItem(QString());
        comboShift->addItem(QString());
        comboShift->setObjectName("comboShift");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, comboShift);

        label_2 = new QLabel(groupModifers);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(40, 16777215));

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        comboAlt = new QComboBox(groupModifers);
        comboAlt->addItem(QString());
        comboAlt->addItem(QString());
        comboAlt->addItem(QString());
        comboAlt->addItem(QString());
        comboAlt->addItem(QString());
        comboAlt->addItem(QString());
        comboAlt->addItem(QString());
        comboAlt->setObjectName("comboAlt");

        formLayout_2->setWidget(9, QFormLayout::ItemRole::FieldRole, comboAlt);

        comboSuper = new QComboBox(groupModifers);
        comboSuper->addItem(QString());
        comboSuper->addItem(QString());
        comboSuper->addItem(QString());
        comboSuper->addItem(QString());
        comboSuper->addItem(QString());
        comboSuper->addItem(QString());
        comboSuper->addItem(QString());
        comboSuper->setObjectName("comboSuper");

        formLayout_2->setWidget(6, QFormLayout::ItemRole::FieldRole, comboSuper);

        comboCtrl = new QComboBox(groupModifers);
        comboCtrl->addItem(QString());
        comboCtrl->addItem(QString());
        comboCtrl->addItem(QString());
        comboCtrl->addItem(QString());
        comboCtrl->addItem(QString());
        comboCtrl->addItem(QString());
        comboCtrl->addItem(QString());
        comboCtrl->setObjectName("comboCtrl");

        formLayout_2->setWidget(4, QFormLayout::ItemRole::FieldRole, comboCtrl);

        labelAltGr = new QLabel(groupModifers);
        labelAltGr->setObjectName("labelAltGr");

        formLayout_2->setWidget(8, QFormLayout::ItemRole::LabelRole, labelAltGr);

        comboAltGr = new QComboBox(groupModifers);
        comboAltGr->addItem(QString());
        comboAltGr->addItem(QString());
        comboAltGr->addItem(QString());
        comboAltGr->addItem(QString());
        comboAltGr->addItem(QString());
        comboAltGr->addItem(QString());
        comboAltGr->addItem(QString());
        comboAltGr->setObjectName("comboAltGr");

        formLayout_2->setWidget(8, QFormLayout::ItemRole::FieldRole, comboAltGr);

        btnModifierKeys = new QPushButton(groupModifers);
        btnModifierKeys->setObjectName("btnModifierKeys");

        formLayout_2->setWidget(10, QFormLayout::ItemRole::SpanningRole, btnModifierKeys);


        layoutLeftSide->addWidget(groupModifers);

        groupDeadCorners = new QGroupBox(ScreenSettingsDialog);
        groupDeadCorners->setObjectName("groupDeadCorners");
        verticalLayout_2 = new QVBoxLayout(groupDeadCorners);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        layoutDeadCornersTop = new QHBoxLayout();
        layoutDeadCornersTop->setObjectName("layoutDeadCornersTop");
        chkDeadTopLeft = new QCheckBox(groupDeadCorners);
        chkDeadTopLeft->setObjectName("chkDeadTopLeft");
        chkDeadTopLeft->setMinimumSize(QSize(0, 0));
        chkDeadTopLeft->setAutoRepeatInterval(100);

        layoutDeadCornersTop->addWidget(chkDeadTopLeft);

        chkDeadTopRight = new QCheckBox(groupDeadCorners);
        chkDeadTopRight->setObjectName("chkDeadTopRight");
        chkDeadTopRight->setMinimumSize(QSize(0, 0));
        chkDeadTopRight->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        layoutDeadCornersTop->addWidget(chkDeadTopRight);


        verticalLayout_2->addLayout(layoutDeadCornersTop);

        layoutCornerSize = new QHBoxLayout();
        layoutCornerSize->setObjectName("layoutCornerSize");
        label = new QLabel(groupDeadCorners);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        layoutCornerSize->addWidget(label);

        sbSwitchCornerSize = new QSpinBox(groupDeadCorners);
        sbSwitchCornerSize->setObjectName("sbSwitchCornerSize");
        sizePolicy1.setHeightForWidth(sbSwitchCornerSize->sizePolicy().hasHeightForWidth());
        sbSwitchCornerSize->setSizePolicy(sizePolicy1);
        sbSwitchCornerSize->setMinimumSize(QSize(70, 0));

        layoutCornerSize->addWidget(sbSwitchCornerSize);


        verticalLayout_2->addLayout(layoutCornerSize);

        layoutDeadCornersBottom = new QHBoxLayout();
        layoutDeadCornersBottom->setObjectName("layoutDeadCornersBottom");
        chkDeadBottomLeft = new QCheckBox(groupDeadCorners);
        chkDeadBottomLeft->setObjectName("chkDeadBottomLeft");
        chkDeadBottomLeft->setMinimumSize(QSize(0, 0));

        layoutDeadCornersBottom->addWidget(chkDeadBottomLeft);

        chkDeadBottomRight = new QCheckBox(groupDeadCorners);
        chkDeadBottomRight->setObjectName("chkDeadBottomRight");
        chkDeadBottomRight->setMinimumSize(QSize(0, 0));
        chkDeadBottomRight->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        layoutDeadCornersBottom->addWidget(chkDeadBottomRight);


        verticalLayout_2->addLayout(layoutDeadCornersBottom);


        layoutLeftSide->addWidget(groupDeadCorners);


        layoutOptions->addLayout(layoutLeftSide);

        layoutRightSide = new QVBoxLayout();
        layoutRightSide->setObjectName("layoutRightSide");
        groupFixes = new QGroupBox(ScreenSettingsDialog);
        groupFixes->setObjectName("groupFixes");
        verticalLayout_3 = new QVBoxLayout(groupFixes);
        verticalLayout_3->setObjectName("verticalLayout_3");
        chkFixScrollLock = new QCheckBox(groupFixes);
        chkFixScrollLock->setObjectName("chkFixScrollLock");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(chkFixScrollLock->sizePolicy().hasHeightForWidth());
        chkFixScrollLock->setSizePolicy(sizePolicy4);

        verticalLayout_3->addWidget(chkFixScrollLock);

        chkFixCapsLock = new QCheckBox(groupFixes);
        chkFixCapsLock->setObjectName("chkFixCapsLock");
        sizePolicy4.setHeightForWidth(chkFixCapsLock->sizePolicy().hasHeightForWidth());
        chkFixCapsLock->setSizePolicy(sizePolicy4);

        verticalLayout_3->addWidget(chkFixCapsLock);

        chkFixNumLock = new QCheckBox(groupFixes);
        chkFixNumLock->setObjectName("chkFixNumLock");
        sizePolicy4.setHeightForWidth(chkFixNumLock->sizePolicy().hasHeightForWidth());
        chkFixNumLock->setSizePolicy(sizePolicy4);

        verticalLayout_3->addWidget(chkFixNumLock);

        chkFixXTest = new QCheckBox(groupFixes);
        chkFixXTest->setObjectName("chkFixXTest");
        sizePolicy4.setHeightForWidth(chkFixXTest->sizePolicy().hasHeightForWidth());
        chkFixXTest->setSizePolicy(sizePolicy4);
        chkFixXTest->setChecked(false);

        verticalLayout_3->addWidget(chkFixXTest);


        layoutRightSide->addWidget(groupFixes);

        groupAliases = new QGroupBox(ScreenSettingsDialog);
        groupAliases->setObjectName("groupAliases");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupAliases->sizePolicy().hasHeightForWidth());
        groupAliases->setSizePolicy(sizePolicy5);
        verticalLayout = new QVBoxLayout(groupAliases);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineAddAlias = new QLineEdit(groupAliases);
        lineAddAlias->setObjectName("lineAddAlias");
        sizePolicy2.setHeightForWidth(lineAddAlias->sizePolicy().hasHeightForWidth());
        lineAddAlias->setSizePolicy(sizePolicy2);
        lineAddAlias->setMinimumSize(QSize(168, 20));
        lineAddAlias->setMaxLength(255);

        horizontalLayout->addWidget(lineAddAlias);

        btnAddAlias = new QPushButton(groupAliases);
        btnAddAlias->setObjectName("btnAddAlias");
        btnAddAlias->setEnabled(true);

        horizontalLayout->addWidget(btnAddAlias);


        verticalLayout->addLayout(horizontalLayout);

        lblAliasError = new QLabel(groupAliases);
        lblAliasError->setObjectName("lblAliasError");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lblAliasError->sizePolicy().hasHeightForWidth());
        lblAliasError->setSizePolicy(sizePolicy6);
        lblAliasError->setMinimumSize(QSize(0, 0));
        lblAliasError->setMaximumSize(QSize(16777215, 16777215));
        lblAliasError->setText(QString::fromUtf8("lblAliasError"));
        lblAliasError->setWordWrap(true);

        verticalLayout->addWidget(lblAliasError);

        listAliases = new QListWidget(groupAliases);
        listAliases->setObjectName("listAliases");
        sizePolicy5.setHeightForWidth(listAliases->sizePolicy().hasHeightForWidth());
        listAliases->setSizePolicy(sizePolicy5);
        listAliases->setMinimumSize(QSize(0, 0));
        listAliases->setMaximumSize(QSize(16777215, 16777215));
        listAliases->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);

        verticalLayout->addWidget(listAliases);

        btnRemoveAlias = new QPushButton(groupAliases);
        btnRemoveAlias->setObjectName("btnRemoveAlias");
        btnRemoveAlias->setEnabled(false);

        verticalLayout->addWidget(btnRemoveAlias);


        layoutRightSide->addWidget(groupAliases);


        layoutOptions->addLayout(layoutRightSide);


        _2->addLayout(layoutOptions);

        buttonBox = new QDialogButtonBox(ScreenSettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMinimumSize(QSize(0, 0));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Save);

        _2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(lineNameEdit);
        label_5->setBuddy(comboMeta);
        label_3->setBuddy(comboCtrl);
        label_6->setBuddy(comboSuper);
        label_4->setBuddy(comboAlt);
        label_2->setBuddy(comboShift);
        labelAltGr->setBuddy(comboAltGr);
        label->setBuddy(sbSwitchCornerSize);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineNameEdit, comboMeta);
        QWidget::setTabOrder(comboMeta, comboShift);
        QWidget::setTabOrder(comboShift, comboCtrl);
        QWidget::setTabOrder(comboCtrl, comboSuper);
        QWidget::setTabOrder(comboSuper, comboAltGr);
        QWidget::setTabOrder(comboAltGr, comboAlt);
        QWidget::setTabOrder(comboAlt, btnModifierKeys);
        QWidget::setTabOrder(btnModifierKeys, chkDeadTopLeft);
        QWidget::setTabOrder(chkDeadTopLeft, chkDeadTopRight);
        QWidget::setTabOrder(chkDeadTopRight, sbSwitchCornerSize);
        QWidget::setTabOrder(sbSwitchCornerSize, chkDeadBottomLeft);
        QWidget::setTabOrder(chkDeadBottomLeft, chkDeadBottomRight);
        QWidget::setTabOrder(chkDeadBottomRight, chkFixScrollLock);
        QWidget::setTabOrder(chkFixScrollLock, chkFixCapsLock);
        QWidget::setTabOrder(chkFixCapsLock, chkFixNumLock);
        QWidget::setTabOrder(chkFixNumLock, chkFixXTest);
        QWidget::setTabOrder(chkFixXTest, lineAddAlias);
        QWidget::setTabOrder(lineAddAlias, btnAddAlias);
        QWidget::setTabOrder(btnAddAlias, listAliases);
        QWidget::setTabOrder(listAliases, btnRemoveAlias);

        retranslateUi(ScreenSettingsDialog);

        comboMeta->setCurrentIndex(3);
        comboAlt->setCurrentIndex(2);
        comboSuper->setCurrentIndex(4);
        comboCtrl->setCurrentIndex(1);
        comboAltGr->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(ScreenSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ScreenSettingsDialog)
    {
        ScreenSettingsDialog->setWindowTitle(QCoreApplication::translate("ScreenSettingsDialog", "Computer settings", nullptr));
        groupComputerName->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "Computer Info", nullptr));
        label_7->setText(QCoreApplication::translate("ScreenSettingsDialog", "Name", nullptr));
        groupModifers->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "Modifier Keys", nullptr));
        label_5->setText(QCoreApplication::translate("ScreenSettingsDialog", "M&eta", nullptr));
        label_3->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Ctrl", nullptr));
        label_6->setText(QCoreApplication::translate("ScreenSettingsDialog", "S&uper", nullptr));
        label_4->setText(QCoreApplication::translate("ScreenSettingsDialog", "Al&t", nullptr));
        comboMeta->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        comboMeta->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        comboMeta->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        comboMeta->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        comboMeta->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        comboMeta->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "Alt Gr", nullptr));
        comboMeta->setItemText(6, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        comboShift->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        comboShift->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        comboShift->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        comboShift->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        comboShift->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        comboShift->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "Alt Gr", nullptr));
        comboShift->setItemText(6, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        label_2->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Shift", nullptr));
        comboAlt->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        comboAlt->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        comboAlt->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        comboAlt->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        comboAlt->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        comboAlt->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "Alt Gr", nullptr));
        comboAlt->setItemText(6, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        comboSuper->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        comboSuper->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        comboSuper->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        comboSuper->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        comboSuper->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        comboSuper->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "Alt Gr", nullptr));
        comboSuper->setItemText(6, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        comboCtrl->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        comboCtrl->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        comboCtrl->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        comboCtrl->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        comboCtrl->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        comboCtrl->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "Alt Gr", nullptr));
        comboCtrl->setItemText(6, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

        labelAltGr->setText(QCoreApplication::translate("ScreenSettingsDialog", "Alt &Gr", nullptr));
        comboAltGr->setItemText(0, QCoreApplication::translate("ScreenSettingsDialog", "Shift", nullptr));
        comboAltGr->setItemText(1, QCoreApplication::translate("ScreenSettingsDialog", "Ctrl", nullptr));
        comboAltGr->setItemText(2, QCoreApplication::translate("ScreenSettingsDialog", "Alt", nullptr));
        comboAltGr->setItemText(3, QCoreApplication::translate("ScreenSettingsDialog", "Meta", nullptr));
        comboAltGr->setItemText(4, QCoreApplication::translate("ScreenSettingsDialog", "Super", nullptr));
        comboAltGr->setItemText(5, QCoreApplication::translate("ScreenSettingsDialog", "Alt Gr", nullptr));
        comboAltGr->setItemText(6, QCoreApplication::translate("ScreenSettingsDialog", "None", nullptr));

#if QT_CONFIG(tooltip)
        btnModifierKeys->setToolTip(QCoreApplication::translate("ScreenSettingsDialog", "Override individual left and right modifier keys", nullptr));
#endif // QT_CONFIG(tooltip)
        btnModifierKeys->setText(QCoreApplication::translate("ScreenSettingsDialog", "Left/right keys...", nullptr));
        groupDeadCorners->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "Dead Corners", nullptr));
#if QT_CONFIG(tooltip)
        chkDeadTopLeft->setToolTip(QCoreApplication::translate("ScreenSettingsDialog", "Top Left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        chkDeadTopRight->setToolTip(QCoreApplication::translate("ScreenSettingsDialog", "Top Right", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("ScreenSettingsDialog", "Corner si&ze", nullptr));
#if QT_CONFIG(tooltip)
        chkDeadBottomLeft->setToolTip(QCoreApplication::translate("ScreenSettingsDialog", "Bottom Left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        chkDeadBottomRight->setToolTip(QCoreApplication::translate("ScreenSettingsDialog", "Bottom Right", nullptr));
#endif // QT_CONFIG(tooltip)
        groupFixes->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "Fixes", nullptr));
        chkFixScrollLock->setText(QCoreApplication::translate("ScreenSettingsDialog", "SCROLL LOCK key", nullptr));
        chkFixCapsLock->setText(QCoreApplication::translate("ScreenSettingsDialog", "CAPS LOCK key", nullptr));
        chkFixNumLock->setText(QCoreApplication::translate("ScreenSettingsDialog", "NUM LOCK key", nullptr));
        chkFixXTest->setText(QCoreApplication::translate("ScreenSettingsDialog", "XTest for Xinerama", nullptr));
        groupAliases->setTitle(QCoreApplication::translate("ScreenSettingsDialog", "Aliases", nullptr));
        btnAddAlias->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Add", nullptr));
        btnRemoveAlias->setText(QCoreApplication::translate("ScreenSettingsDialog", "&Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenSettingsDialog: public Ui_ScreenSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSETTINGSDIALOG_H
