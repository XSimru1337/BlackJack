#include "card.h"

QString Card::getSymbol()
{
    return symbol;
}

int Card::getColor()
{
    return color;
}

Card::Card()
{

}

Card::Card(int color, QString symbol)
{
    this->color = color;
    this->symbol = symbol;
}
