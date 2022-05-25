/*Выполнил Степанов валерий ИВТ19-1*/
//Класс реализующий визуальную составляющую калькулятора
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include "CalculatorLogic.h"
#include "OutputOfNumbers.h"


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
/*Главное окно калькулятора*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    /*on_pushButton_num_name-обработчик
     *события для нажатия на кнопки
     *реализующие арифметические вычисления*/

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_null_clicked();


    /*on_pushButton_num_n_cliced-обработчик
     * события для нажатия на цыфры в ui окне*/

    void on_pushButton_num_1_clicked();

    void on_pushButton_num_2_clicked();

    void on_pushButton_num_3_clicked();

    void on_pushButton_num_4_clicked();

    void on_pushButton_num_5_clicked();

    void on_pushButton_num_6_clicked();

    void on_pushButton_num_7_clicked();

    void on_pushButton_num_8_clicked();

    void on_pushButton_num_9_clicked();

    /*on_pushButton_num_name-обработчик
     *события для нажатия на кнопки
     *реализующие арифметические
     *триганометрические вычисления*/
    void on_pushButton_AC_clicked();

    void on_pushButton_neg_clicked();

    void on_pushButton_percent_clicked();

    void on_pushButton_calculate_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_ln_clicked();

    void on_pushButton_exp_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_pow_clicked();

    void on_Vasya_clicked();

private:


    /*обьявляем переменную типа CalculatorLogic
      В этом методе производятся арифметические операции*/
    CalculatorLogic calc;
    OutputOfNumbers result_text;
    QString str_qt;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
