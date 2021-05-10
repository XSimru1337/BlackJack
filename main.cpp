#include "deck.h"
#include "deckstock.h"
#include "someone.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Deck deck;
    DeckStock *deckStock = DeckStock::get();
    Someone someone;
    return a.exec();
}
