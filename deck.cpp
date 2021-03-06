#include "deck.h"

void Deck::fillDeckList()
{
    for(int colorID = 0; colorID < 4; colorID++)
        for(int i = 0; i < 13; i++)
            deck << new Card(CARD_COLOR_LIST[colorID], CARD_SYMBOL_LIST[i]);
}

void Deck::qDebugDeckList()
{
    for(int i = 0; i < deck.length(); i++) {
        qDebug() << deck[i]->getColor() << deck[i]->getSymbol() << Qt::endl;
    }
}

Deck::Deck()
{
    fillDeckList();
    //qDebugDeckList();
}

QList<Card *> Deck::getDeck()
{
    return deck;
}
