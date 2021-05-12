#include "someone.h"

QList<Card *> Someone::getHand()
{
    return hand;
}

int Someone::calcHandSum()
{
    int sum = 0;
    for(Card* element: hand)
        if(element->getSymbol() != "A")
            sum += getCardValueBySymbole(element->getSymbol());
    sum = calcSumWithAss(sum);
    return sum;
}

void Someone::hitCard()
{
    hand << deckStock->popCard();
}

Someone::Someone()
{
    deckStock = DeckStock::get();
}

int Someone::calcAssCount()
{
    int count = 0;
    for(Card* element: hand)
        if(element->getSymbol() == "A")
            count ++;
    return count;
}

int Someone::calcSumWithAss(int sum)
{
    int assCount = calcAssCount();
    for(int i = 0; i < assCount; i++) {
        if(sum + 11*(assCount-i) <= 21) return sum + 11;
        else sum+= 1;
    }
    return sum;
}
