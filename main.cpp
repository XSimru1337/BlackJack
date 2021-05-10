#include "deck.h"
#include "deckstock.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Deck deck;
    DeckStock deckStock;

    return a.exec();
}
