/********************************************************************************
** Form generated from reading UI file 'Parameter_String_Form.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETER_STRING_FORM_H
#define UI_PARAMETER_STRING_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "PushButtonDone.h"

QT_BEGIN_NAMESPACE

class Ui_Parameter_String_Form
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widgetBg;
    PushButtonDone *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *backgourndimage;

    void setupUi(QWidget *Parameter_String_Form)
    {
        if (Parameter_String_Form->objectName().isEmpty())
            Parameter_String_Form->setObjectName(QStringLiteral("Parameter_String_Form"));
        Parameter_String_Form->resize(1025, 675);
        Parameter_String_Form->setMinimumSize(QSize(1025, 675));
        Parameter_String_Form->setStyleSheet(QLatin1String("QWidget#Parameter_String_Form\n"
"{\n"
"border-image: url(:/resource/images/common/Transparent_Black_70.png);\n"
"}"));
        gridLayout = new QGridLayout(Parameter_String_Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(216, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        widgetBg = new QWidget(Parameter_String_Form);
        widgetBg->setObjectName(QStringLiteral("widgetBg"));
        widgetBg->setMinimumSize(QSize(556, 500));
        widgetBg->setMaximumSize(QSize(556, 500));
        widgetBg->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton = new PushButtonDone(widgetBg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 400, 112, 82));
        QFont font;
        font.setFamily(QStringLiteral("Nexa Light"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	border-image: url(:/resource/images/upload_setting/Done.png);\n"
"	border-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-image: url(:/resource/images/upload_setting/Done_OVER.png);\n"
"	border-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	border-image: url(:/resource/images/upload_setting/Done.png);\n"
"	border-color: rgba(255, 255, 255, 0);\n"
"}"));
        pushButton->setAutoDefault(true);
        lineEdit = new QLineEdit(widgetBg);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 430, 211, 31));
        lineEdit->setStyleSheet(QStringLiteral("font: 17pt \"Microsoft YaHei UI\";"));
        label = new QLabel(widgetBg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 430, 54, 21));
        label->setStyleSheet(QLatin1String("color: rgb(105, 105, 105);\n"
"font: 13pt \"Microsoft JhengHei\";"));
        backgourndimage = new QLabel(widgetBg);
        backgourndimage->setObjectName(QStringLiteral("backgourndimage"));
        backgourndimage->setGeometry(QRect(70, 10, 421, 381));
        backgourndimage->setPixmap(QPixmap(QString::fromUtf8("resource/images/parameter_input/DigitalPin/Arduino Starter.png")));
        pushButton->raise();
        lineEdit->raise();
        label->raise();
        backgourndimage->raise();

        gridLayout->addWidget(widgetBg, 2, 1, 1, 1);

        QWidget::setTabOrder(lineEdit, pushButton);

        retranslateUi(Parameter_String_Form);

        QMetaObject::connectSlotsByName(Parameter_String_Form);
    } // setupUi

    void retranslateUi(QWidget *Parameter_String_Form)
    {
        Parameter_String_Form->setWindowTitle(QApplication::translate("Parameter_String_Form", "Form", 0));
        pushButton->setText(QApplication::translate("Parameter_String_Form", "Done", 0));
        label->setText(QApplication::translate("Parameter_String_Form", "Pin:", 0));
        backgourndimage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Parameter_String_Form: public Ui_Parameter_String_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETER_STRING_FORM_H
