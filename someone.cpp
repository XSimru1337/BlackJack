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
    hand << DeckStock().popCard();
}

Someone::Someone()
{
}
