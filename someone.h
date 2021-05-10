#ifndef SOMEONE_H
#define SOMEONE_H

#include "card.h"
#include "deckstock.h"
#include "config.h"

#include <QObject>

class Someone
{
private:
    QList<Card*> hand;
    DeckStock *deckStock;

public:
    QList<Card*> getHand();
    int calcHandSum();
    int calcSumWithAss(int sum);
    int calcAssCount();
    void hitCard();
    Someone();
};

#endif // SOMEONE_H
