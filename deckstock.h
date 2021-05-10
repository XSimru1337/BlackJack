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
    QList<Card*> deckStock;
    QList<Card*> shuffledDeckStock;

    void fillDeckStock();
    void qDebugDeckStock();
    void qDebugDeckStockSize();

    void qDebugshuffledDeckStock();
    void qDebugshuffledDeckStockSize();

public:
    QList<Card*> getShuffledDeckStock();

    void shuffleDeckStock();

    DeckStock();
};

#endif // DECKSTOCK_H
