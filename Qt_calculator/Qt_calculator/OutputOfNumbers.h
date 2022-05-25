#ifndef OUTPUTOFNUMBERS_H
#define OUTPUTOFNUMBERS_H
#include <qstring.h>

class OutputOfNumbers
{
private:
    QString line;
public:
    OutputOfNumbers();

    QString button_nul (QString txt);
    QString all_num_button (QString txt, QString num);
    QString backspace_button(QString txt);

};

#endif // OUTPUTOFNUMBERS_H
