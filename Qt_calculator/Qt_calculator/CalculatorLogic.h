/*Выполнил Степанов валерий ИВТ19-1*/
//Методы класса реализуют вычисления калькулятора

#ifndef CALCULATORLOGIC_H
#define CALCULATORLOGIC_H

class CalculatorLogic
{
private:
    double a, b;
    bool flag_a,flag_b;//Ожидание записи

    bool flag_plus,flag_min,flag_div,calc_push;//Запоминает нажатый знак

public:
    CalculatorLogic();
    //Ввод данных
    void set_a (double op1);
    void set_b (double op2);

    //Извлечение данных
    double get_a() const;
    double get_b() const;

    //Ввод флага ожидания, только 1 может быть true
    void set_check_a(bool op);
    void set_check_b(bool op);

    bool get_check_a() const;
    bool get_check_b() const;

    //Ввод флагов арифм действий
    void set_flag_plus(bool op);
    bool get_flag_plus() const;

    void set_flag_min(bool op);
    bool get_flag_min() const;

    void set_flag_div(bool op);
    bool get_flag_div() const;



    //Проверка флагов арифметики
    bool check_flag() const;
    //Сброс флагов арифметики
    void reset_flag();
    /*Методы реализующие арифметические
     * и триганометрические функции*/
    double plus() const;
    double minus() const;
    double division() const;





    double calculation() const;

    void set_calc_push(bool op);
    bool get_calc_push() const;
};

#endif // CALCULATORLOGIC_H
