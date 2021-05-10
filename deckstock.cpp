#include "deckstock.h"

void DeckStock::fillDeckStock()
{
    for(int i = 0; i < DECK_COUNT; i++) {
        deckStock << Deck().getDeck();
    }
}

void DeckStock::qDebugDeckStock()
{
    for(int i = 0; i < deckStock.count(); i++) {
        qDebug() << deckStock[i]->getColorID() << deckStock[i]->getSymbol();
    }
}

void DeckStock::qDebugDeckStockSize()
{
    qDebug() << deckStock.size();
}

DeckStock::DeckStock()
{
    fillDeckStock();
    shuffleDeckStock();
    qDebugDeckStock();
    qDebugDeckStockSize();
}
