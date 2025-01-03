/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ChangeSign;
    QPushButton *Button3;
    QPushButton *Button4;
    QPushButton *Percenttage;
    QPushButton *Clear;
    QPushButton *Button1;
    QPushButton *Substract;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Button7;
    QPushButton *Equal;
    QPushButton *Button8;
    QPushButton *Button0;
    QPushButton *Button9;
    QPushButton *Button5;
    QPushButton *Point;
    QPushButton *Divide;
    QPushButton *Button6;
    QPushButton *Button2;
    QLabel *Display;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(299, 420);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #2e3440; /* Dark background */\n"
"    color: #eceff4; /* Light text */\n"
"    font-family: Arial, sans-serif;\n"
"    font-size: 16px;\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(false);
        font.setItalic(false);
        ChangeSign->setFont(font);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #4c566a; /* Gray border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4c566a; /* Gray hover effect */\n"
"    border-color: #5e6775; /* Slightly lighter gray border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5e6775; /* Lighter gray for pressed effect */\n"
"    border-color: #4c566a; /* Original gray border */\n"
"}\n"
""));

        gridLayout->addWidget(ChangeSign, 1, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Percenttage = new QPushButton(centralwidget);
        Percenttage->setObjectName("Percenttage");
        sizePolicy.setHeightForWidth(Percenttage->sizePolicy().hasHeightForWidth());
        Percenttage->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(false);
        Percenttage->setFont(font1);
        Percenttage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #4c566a; /* Gray border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4c566a; /* Gray hover effect */\n"
"    border-color: #5e6775; /* Slightly lighter gray border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5e6775; /* Lighter gray for pressed effect */\n"
"    border-color: #4c566a; /* Original gray border */\n"
"}\n"
""));

        gridLayout->addWidget(Percenttage, 1, 2, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setFont(font);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #4c566a; /* Gray border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4c566a; /* Gray hover effect */\n"
"    border-color: #5e6775; /* Slightly lighter gray border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5e6775; /* Lighter gray for pressed effect */\n"
"    border-color: #4c566a; /* Original gray border */\n"
"}\n"
""));

        gridLayout->addWidget(Clear, 1, 0, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Substract = new QPushButton(centralwidget);
        Substract->setObjectName("Substract");
        sizePolicy.setHeightForWidth(Substract->sizePolicy().hasHeightForWidth());
        Substract->setSizePolicy(sizePolicy);
        Substract->setFont(font);
        Substract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #d08770; /* Light orange border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d08770; /* Light orange hover effect */\n"
"    border-color: #e5b680; /* Softer orange border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e5b680; /* Lighter orange for pressed effect */\n"
"    border-color: #d08770; /* Return to original orange border */\n"
"}\n"
""));

        gridLayout->addWidget(Substract, 4, 3, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #d08770; /* Light orange border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d08770; /* Light orange hover effect */\n"
"    border-color: #e5b680; /* Softer orange border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e5b680; /* Lighter orange for pressed effect */\n"
"    border-color: #d08770; /* Return to original orange border */\n"
"}\n"
""));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #d08770; /* Light orange border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d08770; /* Light orange hover effect */\n"
"    border-color: #e5b680; /* Softer orange border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e5b680; /* Lighter orange for pressed effect */\n"
"    border-color: #d08770; /* Return to original orange border */\n"
"}\n"
""));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Equal = new QPushButton(centralwidget);
        Equal->setObjectName("Equal");
        sizePolicy.setHeightForWidth(Equal->sizePolicy().hasHeightForWidth());
        Equal->setSizePolicy(sizePolicy);
        Equal->setFont(font);
        Equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #a3be8c; /* Light green border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #a3be8c; /* Light green hover effect */\n"
"    border-color: #b5d19a; /* Softer green border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #b5d19a; /* Lighter green for pressed effect */\n"
"    border-color: #a3be8c; /* Original light green border */\n"
"}\n"
""));

        gridLayout->addWidget(Equal, 5, 3, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFont(font);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button0, 5, 0, 1, 2);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Point = new QPushButton(centralwidget);
        Point->setObjectName("Point");
        sizePolicy.setHeightForWidth(Point->sizePolicy().hasHeightForWidth());
        Point->setSizePolicy(sizePolicy);
        Point->setFont(font1);
        Point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #4c566a; /* Gray border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #4c566a; /* Gray hover effect */\n"
"    border-color: #5e6775; /* Slightly lighter gray border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5e6775; /* Lighter gray for pressed effect */\n"
"    border-color: #4c566a; /* Original gray border */\n"
"}\n"
""));

        gridLayout->addWidget(Point, 5, 2, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #d08770; /* Light orange border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #d08770; /* Light orange hover effect */\n"
"    border-color: #e5b680; /* Softer orange border on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #e5b680; /* Lighter orange for pressed effect */\n"
"    border-color: #d08770; /* Return to original orange border */\n"
"}\n"
""));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #434c5e; /* Button background */\n"
"    color: #eceff4; /* Text color */\n"
"    border: 2px solid #88c0d0; /* Blue border */\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 18px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5e81ac; /* Hover effect */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #88c0d0; /* Pressed effect */\n"
"    border-color: #5e81ac;\n"
"}\n"
""));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Display = new QLabel(centralwidget);
        Display->setObjectName("Display");
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setBold(true);
        font2.setItalic(false);
        Display->setFont(font2);
        Display->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial; /* Arial font */\n"
"    font-size: 30px; /* Bigger text size */\n"
"    font-weight: bold; /* Bold text */\n"
"    color: #eceff4; /* Light text color to match the theme */\n"
"    background-color: transparent; /* Transparent background */\n"
"    padding-top: 5px;\n"
"}\n"
""));
        Display->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Percenttage->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Substract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Point->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
