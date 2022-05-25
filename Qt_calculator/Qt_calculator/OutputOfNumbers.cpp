#include "OutputOfNumbers.h"

OutputOfNumbers::OutputOfNumbers()
{
    this -> line = "0";
}

QString OutputOfNumbers::button_nul (QString txt){
    if (txt.toDouble() == 0){
        if (txt.contains('.'))
        txt = txt +"0";
        else
        txt = txt +".0";}
    else
       txt = txt +"0";
    return txt;
}

QString OutputOfNumbers::all_num_button(QString txt, QString num){
     if ((txt.toDouble() == 0) && (txt.contains('.')))
          return txt += num;
     else if (txt.toDouble() == 0)
          return txt = num;
     else return txt += num;
}

QString OutputOfNumbers::backspace_button(QString txt){
    if (txt.size()==1){
        return "0";
    }else{
        txt.chop(1);
        return txt;
    }
}
