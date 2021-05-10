#ifndef SOMEONE_H
#define SOMEONE_H

#include "card.h"
#include "deckstock.h"

#include <QObject>

class Someone
{
private:
    QList<Card*> hand;
public:
    Someone();
};

#endif // SOMEONE_H
