#ifndef CARD_H
#define CARD_H

#include "config.h"

#include <QString>

class Card
{
private:
    int         colorID;
    QString     symbol;
public:
    QString getSymbol();
    int getColorID();
    Card();
    Card(color color, QString symbol);
};

#endif // CARD_H
