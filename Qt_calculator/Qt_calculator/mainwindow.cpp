 /*Выполнил Степанов валерий ИВТ19-1*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include "CalculatorLogic.h"
#include "OutputOfNumbers.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*обработчик события (+).Меняет флаг. Вносит данные
  в метод CalculatorLogic*/
void MainWindow::on_pushButton_plus_clicked()
{
    if (calc.check_flag()){
        if (calc.get_check_a()){
            calc.reset_flag();
            calc.set_flag_plus(true);
            ui->label1->setNum(calc.get_a());
            calc.set_check_b(true);
            ui->result_label->setNum(0);
        } else {
            calc.set_b(ui->result_label->text().toDouble());
            ui->result_label->setNum(calc.calculation());
            calc.set_a(ui->result_label->text().toDouble());
            calc.set_b(0);
            calc.reset_flag();
            calc.set_flag_plus(true);
            calc.set_check_b(true);
            ui->result_label->setNum(0);
        }
    } else {
        calc.set_a(ui->result_label->text().toDouble());
        calc.set_flag_plus(true);
        calc.set_check_b(true);
        calc.set_b(0);//+++++++
        ui->result_label->setNum(0);
    }
    ui->label1->setText(QString::number(calc.get_a())+"  "+QString::number(calc.get_b()));
}

/*обработчик события (-).Меняет флаг. Вносит данные
  в метод CalculatorLogic*/
void MainWindow::on_pushButton_minus_clicked()
{
    if (calc.check_flag()){
        if (calc.get_check_a()){
            //просто менять знак
            calc.reset_flag();
            calc.set_flag_min(true);
            ui->label1->setNum(calc.get_a());
            calc.set_check_b(true);
            ui->result_label->setNum(0);
        } else {
            calc.set_b(ui->result_label->text().toDouble());
            ui->result_label->setNum(calc.calculation());
            calc.set_a(ui->result_label->text().toDouble());
            calc.set_b(0);
            calc.reset_flag();
            calc.set_flag_min(true);
            calc.set_check_b(true);
            ui->result_label->setNum(0);
        }
    } else {
        calc.set_a(ui->result_label->text().toDouble());
        calc.set_flag_min(true);
        calc.set_check_b(true);
        calc.set_b(0);//+++++++
        ui->result_label->setNum(0);
    }
    ui->label1->setText(QString::number(calc.get_a())+"  "+QString::number(calc.get_b()));
}

/*обработчик события (*).Меняет флаг. Вносит данные
  в метод CalculatorLogic*/
void MainWindow::on_pushButton_mul_clicked()
{


}

/*обработчик события (/).Меняет флаг. Вносит данные
  в метод CalculatorLogic*/
void MainWindow::on_pushButton_div_clicked()
{
    if (calc.check_flag()){
        if (calc.get_check_a()){
            //просто менять знак
            calc.reset_flag();
            calc.set_flag_div(true);
            ui->label1->setNum(calc.get_a());
            calc.set_check_b(true);
            ui->result_label->setNum(0);
//            calc.set_b(0);
        } else {
            calc.set_b(ui->result_label->text().toDouble());
            ui->result_label->setNum(calc.calculation());
            calc.set_a(ui->result_label->text().toDouble());
            calc.set_b(0);
            calc.reset_flag();
            calc.set_flag_div(true);
            calc.set_check_b(true);
//            calc.set_b(0);
            ui->result_label->setNum(0);
        }
    } else {
        calc.set_a(ui->result_label->text().toDouble());
        calc.set_flag_div(true);
        calc.set_check_b(true);
        calc.set_b(0);//+++++++
        ui->result_label->setNum(0);
    }
    ui->label1->setText(QString::number(calc.get_a())+"  "+QString::number(calc.get_b()));
}


/*обработчик события (0). Выводит число на lable*/
void MainWindow::on_pushButton_null_clicked()
{
    ui->result_label->setText(result_text.button_nul(ui->result_label->text()));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (1). Выводит число на lable*/
void MainWindow::on_pushButton_num_1_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"1"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (2). Выводит число на lable*/
void MainWindow::on_pushButton_num_2_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"2"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (3). Выводит число на lable*/
void MainWindow::on_pushButton_num_3_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"3"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (4). Выводит число на lable*/
void MainWindow::on_pushButton_num_4_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"4"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}


/*обработчик события (5). Выводит число на lable*/
void MainWindow::on_pushButton_num_5_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"5"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (6). Выводит число на lable*/
void MainWindow::on_pushButton_num_6_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"6"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}


/*обработчик события (7). Выводит число на lable*/
void MainWindow::on_pushButton_num_7_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"7"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (8). Выводит число на lable*/
void MainWindow::on_pushButton_num_8_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"8"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

/*обработчик события (9). Выводит число на lable*/
void MainWindow::on_pushButton_num_9_clicked()
{
    ui->result_label->setText(result_text.all_num_button(ui->result_label->text(),"9"));
    if (calc.get_check_a()){
        calc.set_a(ui->result_label->text().toDouble());
    } else {
        calc.set_b(ui->result_label->text().toDouble());
    }
}

//обработчик события(АС).Сбрасывает флаги, обнуляет числа на lable.
void MainWindow::on_pushButton_AC_clicked()
{
    calc.set_check_a(true);
    calc.reset_flag();
    calc.set_a(0);
    calc.set_b(0);
    ui->result_label->setNum(0);
}

//обработчик события(neg). Умножение на (-1)
void MainWindow::on_pushButton_neg_clicked()
{

}

//обработчик события(%). Умножение на (0.01)
void MainWindow::on_pushButton_percent_clicked()
{

}


//обработчик события(=). Проверяет значение флагов.
//если check_... == true выполнить действие...
void MainWindow::on_pushButton_calculate_clicked()
{
// calc.set_a(calc.calculation());
 ui->result_label->setNum(calc.get_a());
 try {
     calc.set_a(calc.calculation());
 } catch (int) {
     ui->result_label->setText("dfghjkl");
 }
 calc.set_check_a(true);
 calc.set_calc_push(true); //скорее всего лишнее

}

//обработчик события(.). Добавляет точку.
void MainWindow::on_pushButton_dot_clicked()
{

}


//обработчик события(sin). вычисляет значение sin в радианах
void MainWindow::on_pushButton_sin_clicked()
{

}

//обработчик события(cos). вычисляет значение cos в радианах
void MainWindow::on_pushButton_cos_clicked()
{

}

//обработчик события(ln). вычисляет значение натурального логорифма
void MainWindow::on_pushButton_ln_clicked()
{

}

//обработчик события(exp). вычисляет значение exp
void MainWindow::on_pushButton_exp_clicked()
{

}

//обработчик события(tan). вычисляет значение tan в радианах
void MainWindow::on_pushButton_tan_clicked()
{

}

//обработчик события(n^x). Возведение в степень x
void MainWindow::on_pushButton_pow_clicked()
{

}

void MainWindow::on_Vasya_clicked()
{
   ui->result_label->setText(result_text.backspace_button(ui->result_label->text()));
   if (calc.get_check_a()){
       calc.set_a(ui->result_label->text().toDouble());
   } else {
       calc.set_b(ui->result_label->text().toDouble());
   }
}
