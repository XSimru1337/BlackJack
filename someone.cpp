#include "someone.h"

QList<Card *> Someone::getHand()
{
    return hand;
}

void Someone::resetHand()
{
    hand.clear();
}

int Someone::calcHandSum()
{
    int sum = 0;
    for(int i = 0; i < hand.size(); i++)
        if(hand[i]->getSymbol() != "A")
            sum += getCardValueBySymbole(hand[i]->getSymbol());
    sum = calcSumWithAce(sum);
    return sum;
}

void Someone::hitCard()
{
    hand << deckStock->popCard();
}

QString Someone::getDebugHandString()
{
    QString tmpHandDebugString;
    for(int i = 0; i < hand.size(); i++)
        tmpHandDebugString += "[" + hand[i]->getSymbol() + "]";
    return tmpHandDebugString;
}

Someone::Someone()
{
    deckStock = DeckStock::get();
}

int Someone::calcAceCount()
{
    int count = 0;
    for(Card* element: hand)
        if(element->getSymbol() == "A")
            count ++;
    return count;
}

int Someone::calcSumWithAce(int sum)
{
    int assCount = calcAceCount();
    for(int i = 0; i < assCount; i++) {
        if(sum + 11*(assCount-i) <= 21) return sum + 11;
        else sum+= 1;
    }
    return sum;
}
