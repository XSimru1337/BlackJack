#ifndef DECKSTOCK_H
#define DECKSTOCK_H


#include "deck.h"
#include "card.h"
#include "config.h"

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

class DeckStock : public QObject
{
private:
    DeckStock( QObject *parent = 0 );

    QList<Card*> deckStockList;
    static DeckStock *deckStock;

    void fillDeckStock();
    void qDebugDeckStock();
    void qDebugDeckStockSize();

public:
    static DeckStock *get();
    QList<Card*> getDeckStock();

    void        shuffleDeckStock();
    Card*       popCard();
};

#endif // DECKSTOCK_H
