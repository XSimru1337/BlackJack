#ifndef SOMEONE_H
#define SOMEONE_H

#include "card.h"
#include "deckstock.h"

#include <QObject>

class someone
{
private:
    QList<Card*> hand;
public:
    someone();
};

#endif // SOMEONE_H
