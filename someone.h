#ifndef SOMEONE_H
#define SOMEONE_H

#include "card.h"
#include "deckstock.h"

#include <QObject>

class Someone
{
private:
    QList<Card*> hand;
    DeckStock *deckStock;

public:
    QList<Card*> getHand();
    void calcHandSum();
    void hitCard();
    Someone();
};

#endif // SOMEONE_H
