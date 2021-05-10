#ifndef DECK_H
#define DECK_H


#include "card.h"
#include "config.h"

#include <QList>
#include <QDebug>

class Deck
{
private:
    QList<Card*> deck;
    void fillDeckList();
    void qDebugDeckList();

public:
    Deck();
    QList<Card*> getDeck();
};
#endif // DECK_H
