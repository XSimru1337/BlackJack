#ifndef DECKSTOCK_H
#define DECKSTOCK_H


#include "deck.h"
#include "card.h"
#include "config.h"

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

class DeckStock
{
private:
    void fillDeckStock();
    QList<Card*> deckStock;
    void qDebugDeckStock();
    void qDebugDeckStockSize();
public:
    DeckStock();
    void shuffleDeckStock();
};

#endif // DECKSTOCK_H
