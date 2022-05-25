/*Выполнил Степанов валерий ИВТ19-1*/
#include "CalculatorLogic.h"
#include <cmath>
#include <iostream>




CalculatorLogic::CalculatorLogic()
{
    this->a=0;
    this->b=0;

    this->flag_a=true;
    this->flag_b=false;

    this->flag_plus=false;
    this->flag_min=false;
    this->flag_div=false;

    this->calc_push = false;

}

void CalculatorLogic::set_a (double op1){
    this->a = op1;
}
void CalculatorLogic::set_b (double op2){
    this->b = op2;
}

double CalculatorLogic::get_a() const{
    return this->a;
}

double CalculatorLogic::get_b() const{
    return this->b;
}

void CalculatorLogic::set_check_a(bool op){
    if (op==true){
        this->flag_a=true;
        this->flag_b=false;
    } else {
        this->flag_a=false;
        this->flag_b=true;
    }
}

void CalculatorLogic::set_check_b(bool op){
    if (op==true){
        this->flag_a=false;
        this->flag_b=true;
    } else {
        this->flag_a=true;
        this->flag_b=false;
    }
}

bool CalculatorLogic::get_check_a() const{
    return this->flag_a;
}

bool CalculatorLogic::get_check_b() const{
    return this->flag_b;
}

void CalculatorLogic::set_flag_plus(bool op){
    this->flag_plus=op;
}
bool CalculatorLogic::get_flag_plus() const{
    return this->flag_plus;
}

void CalculatorLogic::set_flag_min(bool op){
    this->flag_min=op;
}
bool CalculatorLogic::get_flag_min() const{
    return this->flag_min;
}

void CalculatorLogic::set_flag_div(bool op){
    this->flag_div=op;
}
bool CalculatorLogic::get_flag_div() const{
    return this->flag_div;
}

bool CalculatorLogic::check_flag() const{
    if (this->get_flag_plus() || this->get_flag_min())
        return true;
    else
        return false;
}

void CalculatorLogic::reset_flag() {
    this->flag_min = false;
    this->flag_plus = false;
    this->flag_div = false;

}

double CalculatorLogic::plus() const{
    return this->a+b;
}

double CalculatorLogic::minus() const{
    return this->a-b;
}

double CalculatorLogic::division() const{
    throw 1;
    return this->a/this->b;

}

double CalculatorLogic::calculation() const{
    if (this->flag_plus){
        return this->plus();
    } else if (this->flag_min){
        return this->minus();
    } else if (this->flag_div) {
        return this->division();
    } else return 999999;
}

void CalculatorLogic::set_calc_push(bool op){
    this->calc_push = op;
}

bool CalculatorLogic::get_calc_push() const{
    return this->calc_push;
}

