#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void unary_operation_pressed();
    void digit_pressed();
    void on_Display_linkActivated(const QString &link);
    void on_Point_released();
    void on_Clear_released();
    void on_Equal_released();
    void binary_operation_pressed();
};
#endif // CALCULATOR_H
