#ifndef SOMEONE_H
#define SOMEONE_H

#include "card.h"
#include "deckstock.h"
#include "config.h"

#include <QObject>

class Someone
{
private:
    DeckStock *deckStock;

    QList<Card*> hand;

public:
    QList<Card*> getHand();
    void resetHand();

    int calcHandSum();
    int calcSumWithAce(int sum);
    int calcAceCount();

    void hitCard();
    QString getDebugHandString();
    Someone();
};

#endif // SOMEONE_H
