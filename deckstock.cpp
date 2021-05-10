#include "deckstock.h"

DeckStock *DeckStock::deckStock = nullptr;

DeckStock *DeckStock::get(){
    if(!deckStock)
        deckStock = new DeckStock();
    return deckStock;
}

void DeckStock::fillDeckStock()
{
    for(int i = 0; i < DECK_COUNT; i++)
        deckStockList << Deck().getDeck();
}

void DeckStock::qDebugDeckStock()
{
    for(int i = 0; i < deckStockList.size(); i++)
        qDebug() << deckStockList[i]->getColor() << deckStockList[i]->getSymbol();
}

void DeckStock::qDebugDeckStockSize()
{
    qDebug() << deckStockList.size();
}

void DeckStock::shuffleDeckStock()
{
    QList<Card*> tmpDeckStock = deckStockList;
    for(int i = 0; i < DECK_COUNT*52; i++) {
        int tmpCrdPos = rand() % (tmpDeckStock.size());
        deckStockList[i] = tmpDeckStock[tmpCrdPos];
        tmpDeckStock.removeAt(tmpCrdPos);
    }
}

Card* DeckStock::popCard()
{
    return deckStockList.takeLast();
}

DeckStock::DeckStock(QObject *parent)
{
    srand(time(NULL));

    fillDeckStock();
    shuffleDeckStock();
    qDebugDeckStockSize();
}
