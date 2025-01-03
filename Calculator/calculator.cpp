#include "calculator.h"
#include "./ui_calculator.h"

double firstNum;
bool userSecondNumber = false;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    connect(ui->Button0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->ChangeSign,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->Percenttage,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->Add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->Substract,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->Multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->Divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->Add->setCheckable(true);
    ui->Substract->setCheckable(true);
    ui->Multiply->setCheckable(true);
    ui->Divide->setCheckable(true);

}

Calculator::~Calculator() {
    delete ui;
}

void Calculator::digit_pressed() {

    QPushButton *Button = (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if((ui->Add->isChecked() || ui->Substract->isChecked() ||
         ui->Multiply->isChecked() || ui->Divide->isChecked()) && (!userSecondNumber))
    {
        labelNumber = Button->text().toDouble();
        userSecondNumber = true;
        newLabel = QString::number(labelNumber, 'g', 16);

    } else {

        if(ui->Display->text().contains('.') && Button->text() == "0") {
        newLabel = (ui->Display->text() + Button->text());

        } else {
        labelNumber = (ui->Display->text() + Button->text()).toDouble();
        newLabel = QString::number(labelNumber, 'g', 16);

        }
    }
    ui->Display->setText(newLabel);
}

void Calculator::on_Point_released()
{
    ui->Display->setText(ui->Display->text() + ".");
}

void Calculator::unary_operation_pressed(){
    QPushButton *Button = (QPushButton*)sender();
    double labelNumber;
    QString newLabel;

    if (Button->text() == "+/-") {
        labelNumber = ui->Display->text().toDouble();
        labelNumber*= -1;
        newLabel = QString::number(labelNumber, 'g', 16);
        ui->Display->setText(newLabel);
    }

    if (Button->text() == "%") {
        labelNumber = ui->Display->text().toDouble();
        labelNumber *= 0.01;
        newLabel = QString::number(labelNumber, 'g', 16);
        ui->Display->setText(newLabel);
    }
}

void Calculator::on_Clear_released()
{
    ui->Add->setChecked(false);
    ui->Substract->setChecked(false);
    ui->Multiply->setChecked(false);
    ui->Divide->setChecked(false);

    userSecondNumber = false;

    ui->Display->setText("0");

}


void Calculator::on_Equal_released()
{
    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->Display->text().toDouble();


    if(ui->Add->isChecked()) {
        labelNumber = firstNum + secondNum;
        newLabel = QString::number(labelNumber, 'g', 16);
        ui->Display->setText(newLabel);
        ui->Add->setChecked(false);
    }

    else if(ui->Substract->isChecked()) {
        labelNumber = firstNum - secondNum;
        newLabel = QString::number(labelNumber, 'g', 16);
        ui->Display->setText(newLabel);
        ui->Substract->setChecked(false);
    }

    else if(ui->Multiply->isChecked()) {
        labelNumber = firstNum * secondNum;
        newLabel = QString::number(labelNumber, 'g', 16);
        ui->Display->setText(newLabel);
        ui->Multiply->setChecked(false);
    }

    else if(ui->Divide->isChecked()) {
        labelNumber = firstNum / secondNum;
        newLabel = QString::number(labelNumber, 'g', 16);
        ui->Display->setText(newLabel);
        ui->Divide->setChecked(false);
    }

    userSecondNumber = false;
}

void Calculator::binary_operation_pressed(){

    QPushButton* Button = (QPushButton*)sender();
    firstNum = ui->Display->text().toDouble();
    Button->setChecked(true);

}
