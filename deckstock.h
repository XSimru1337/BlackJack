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
    DeckStock(QObject *parent = 0);

    QList<Card*> deckStockList;
    static DeckStock *deckStock;
    DeckStock*  refresh() { return deckStock = new DeckStock(); }

public:
    static DeckStock *get();
    QList<Card*> getDeckStock();

    void        fillDeckStock();
    void        shuffleDeckStock();
    void        maybeRefreshDeckStock();
    Card*       popCard();

    void qDebugDeckStock();
    void qDebugDeckStockSize();
};

#endif // DECKSTOCK_H
