#ifndef CARD_H
#define CARD_H

#include "config.h"

#include <QString>

class Card
{
private:
    int         color; // PIG KARO HERZ KREUZ
    QString     symbol;  //
public:
    QString     getSymbol();
    int         getColor();
    Card();
    Card(int color, QString symbol);
};

#endif // CARD_H
