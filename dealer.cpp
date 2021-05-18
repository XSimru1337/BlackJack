#include "dealer.h"

Dealer::Dealer(Someone *parent)
{

}

void Dealer::dealerLoop()
{
    while (this->calcHandSum() < 17 || (this->calcHandSum() == getHitValue() && this->isHandSoft())) {
        this->hitCard();
        sleep(2);
        qDebugHand();
    }
    sleep(5);
    qDebug() << Qt::endl << Qt::endl << Qt::endl << Qt::endl << Qt::endl;
}

bool Dealer::isHandSoft()
{
    if(!this->calcAceCount()) return false;
    return (calcHandSumWithoutAce() + this->calcAceCount() + 10) <= 21;
}

int Dealer::calcHandSumWithoutAce()
{
    int sum = 0;
    for(Card *card : this->getHand())
        sum += card->getSymbol() != "A" ? getCardValueBySymbole(card->getSymbol()) : 0;
    return sum;
}

void Dealer::qDebugHand()
{
    qDebug() << "Dealer  " << this->getDebugHandString() << this->calcHandSum();
}
