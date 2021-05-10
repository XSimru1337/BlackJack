#include "someone.h"

QList<Card *> Someone::getHand()
{
    return hand;
}

void Someone::calcHandSum()
{
}

void Someone::hitCard()
{
    Card card;
    hand << deckStock->popCard();
    qDebug() << hand.size();
    if(hand.size()  > 1) qDebug() << hand[1]->getSymbol();
}

Someone::Someone()
{
    deckStock = DeckStock::get();

    hitCard();
    hitCard();
    calcHandSum();
}
