#include "deckstock.h"

void DeckStock::fillDeckStock()
{
    for(int i = 0; i < DECK_COUNT; i++)
        deckStock << Deck().getDeck();
}

void DeckStock::qDebugDeckStock()
{
    for(int i = 0; i < deckStock.size(); i++)
        qDebug() << deckStock[i]->getColor() << deckStock[i]->getSymbol();
}

void DeckStock::qDebugDeckStockSize()
{
    qDebug() << deckStock.size();
}

void DeckStock::shuffleDeckStock()
{
    QList<Card*> tmpDeckStock = deckStock;
    for(int i = 0; i < DECK_COUNT*52; i++) {
        int tmpCrdPos = rand() % (tmpDeckStock.size());
        deckStock[i] = tmpDeckStock[tmpCrdPos];
        tmpDeckStock.removeAt(tmpCrdPos);
    }
}

Card* DeckStock::popCard()
{
    return deckStock.takeLast();
}

DeckStock::DeckStock()
{
    srand(time(NULL));

    fillDeckStock();
    shuffleDeckStock();
    qDebugDeckStock();
    qDebugDeckStockSize();
}
