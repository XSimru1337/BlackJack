#ifndef CARD_H
#define CARD_H

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
};

#endif // CARD_H
