#include "card.h"

QString Card::getSymbol()
{
    return symbol;
}

int Card::getColorID()
{
    return colorID;
}

Card::Card()
{
}

Card::Card(color colorID, QString symbol)
{
    this->colorID = colorID;
    this->symbol = symbol;
}
