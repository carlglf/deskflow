/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *frameLogo;
    QGridLayout *gridLayout;
    QLabel *linkGpl;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *lblName;
    QLabel *lblIcon;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lblVersion;
    QPushButton *btnCopyVersion;
    QSpacerItem *horizontalSpacer;
    QLabel *linkContributors;
    QLabel *lblDescription;
    QLabel *lblCopyright;
    QSpacerItem *verticalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblImportantDevs;
    QPushButton *btnOk;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->setWindowModality(Qt::WindowModality::ApplicationModal);
        AboutDialog->resize(525, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("help-about")));
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName("verticalLayout");
        frameLogo = new QWidget(AboutDialog);
        frameLogo->setObjectName("frameLogo");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameLogo->sizePolicy().hasHeightForWidth());
        frameLogo->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(frameLogo);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        linkGpl = new QLabel(frameLogo);
        linkGpl->setObjectName("linkGpl");
        sizePolicy1.setHeightForWidth(linkGpl->sizePolicy().hasHeightForWidth());
        linkGpl->setSizePolicy(sizePolicy1);
        linkGpl->setOpenExternalLinks(true);

        gridLayout->addWidget(linkGpl, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        lblName = new QLabel(frameLogo);
        lblName->setObjectName("lblName");
        sizePolicy1.setHeightForWidth(lblName->sizePolicy().hasHeightForWidth());
        lblName->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(28);
        font.setBold(true);
        lblName->setFont(font);
        lblName->setText(QString::fromUtf8("Deskflow"));
        lblName->setScaledContents(false);
        lblName->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        lblName->setIndent(0);
        lblName->setProperty("program_name", QVariant(false));

        gridLayout->addWidget(lblName, 1, 1, 1, 1);

        lblIcon = new QLabel(frameLogo);
        lblIcon->setObjectName("lblIcon");
        sizePolicy1.setHeightForWidth(lblIcon->sizePolicy().hasHeightForWidth());
        lblIcon->setSizePolicy(sizePolicy1);
        lblIcon->setAutoFillBackground(false);

        gridLayout->addWidget(lblIcon, 0, 0, 9, 1);

        widget_2 = new QWidget(frameLogo);
        widget_2->setObjectName("widget_2");
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label->setIndent(0);

        horizontalLayout->addWidget(label);

        lblVersion = new QLabel(widget_2);
        lblVersion->setObjectName("lblVersion");
        sizePolicy2.setHeightForWidth(lblVersion->sizePolicy().hasHeightForWidth());
        lblVersion->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(11);
        lblVersion->setFont(font1);
        lblVersion->setText(QString::fromUtf8("lbl_version"));
        lblVersion->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lblVersion->setProperty("smaller_text", QVariant(true));

        horizontalLayout->addWidget(lblVersion);

        btnCopyVersion = new QPushButton(widget_2);
        btnCopyVersion->setObjectName("btnCopyVersion");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnCopyVersion->sizePolicy().hasHeightForWidth());
        btnCopyVersion->setSizePolicy(sizePolicy3);
        btnCopyVersion->setMaximumSize(QSize(32, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/64x64/copy-dark.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnCopyVersion->setIcon(icon1);
        btnCopyVersion->setFlat(true);

        horizontalLayout->addWidget(btnCopyVersion);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(widget_2, 3, 1, 1, 1);

        linkContributors = new QLabel(frameLogo);
        linkContributors->setObjectName("linkContributors");
        sizePolicy1.setHeightForWidth(linkContributors->sizePolicy().hasHeightForWidth());
        linkContributors->setSizePolicy(sizePolicy1);
        linkContributors->setOpenExternalLinks(true);

        gridLayout->addWidget(linkContributors, 5, 1, 1, 1);


        verticalLayout->addWidget(frameLogo);

        lblDescription = new QLabel(AboutDialog);
        lblDescription->setObjectName("lblDescription");
        sizePolicy1.setHeightForWidth(lblDescription->sizePolicy().hasHeightForWidth());
        lblDescription->setSizePolicy(sizePolicy1);
        lblDescription->setText(QString::fromUtf8("lblDescription"));
        lblDescription->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(lblDescription);

        lblCopyright = new QLabel(AboutDialog);
        lblCopyright->setObjectName("lblCopyright");
        sizePolicy1.setHeightForWidth(lblCopyright->sizePolicy().hasHeightForWidth());
        lblCopyright->setSizePolicy(sizePolicy1);
        lblCopyright->setText(QString::fromUtf8("lblCopyright"));

        verticalLayout->addWidget(lblCopyright);

        verticalSpacer_2 = new QSpacerItem(20, 6, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        scrollArea = new QScrollArea(AboutDialog);
        scrollArea->setObjectName("scrollArea");
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 505, 294));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(label_2);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy5);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        lblImportantDevs = new QLabel(groupBox);
        lblImportantDevs->setObjectName("lblImportantDevs");
        sizePolicy.setHeightForWidth(lblImportantDevs->sizePolicy().hasHeightForWidth());
        lblImportantDevs->setSizePolicy(sizePolicy);
        lblImportantDevs->setFrameShape(QFrame::Shape::NoFrame);
        lblImportantDevs->setText(QString::fromUtf8("lblImportantDevs"));
        lblImportantDevs->setWordWrap(true);

        verticalLayout_2->addWidget(lblImportantDevs);


        verticalLayout_4->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        btnOk = new QPushButton(AboutDialog);
        btnOk->setObjectName("btnOk");
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("window-close")));
        btnOk->setIcon(icon2);

        verticalLayout->addWidget(btnOk);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Deskflow", nullptr));
        linkGpl->setText(QCoreApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.gnu.org/licenses/old-licenses/gpl-2.0.html\"><span style=\" text-decoration: underline; color:#508ed8;\">License: GNU GPL Version 2</a></span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "Version: ", nullptr));
#if QT_CONFIG(tooltip)
        btnCopyVersion->setToolTip(QCoreApplication::translate("AboutDialog", "Copy version info", nullptr));
#endif // QT_CONFIG(tooltip)
        linkContributors->setText(QCoreApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/deskflow/deskflow/graphs/contributors\"><span style=\" text-decoration: underline; color:#508ed8;\">Code Contributors</span></a></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Icons from <a href=\"https://develop.kde.org/frameworks/breeze-icons/\"><span style=\" text-decoration: underline; color:#007af4;\">KDE Breeze</span></a></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AboutDialog", "Important Developers", nullptr));
        btnOk->setText(QCoreApplication::translate("AboutDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
