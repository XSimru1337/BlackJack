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

void DeckStock::shuffleDeckStock()
{
    srand(time(NULL));

    while(shuffledDeckStock.size()< DECK_COUNT*52) {
        for(int i = 0; i < deckStock.size(); i++) {
            int tmpCrdPos = i + rand() % (deckStock.size()-i);
            shuffledDeckStock << deckStock[tmpCrdPos];
            deckStock.removeAt(tmpCrdPos);
        }
    }
}
void DeckStock::qDebugShuffledDeckStock()
{
    for(int i = 0; i < shuffledDeckStock.size(); i++) {
        qDebug() << shuffledDeckStock[i]->getColorID() << shuffledDeckStock[i]->getSymbol();
    }
}

void DeckStock::qDebugShuffledDeckStockSize()
{
    qDebug() << shuffledDeckStock.size();
}

QList<Card *> DeckStock::getShuffledDeckStock()
{
    return shuffledDeckStock;
}

DeckStock::DeckStock()
{
    fillDeckStock();
    shuffleDeckStock();
    qDebugShuffledDeckStock();
    qDebugShuffledDeckStockSize();
}
