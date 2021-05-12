#include "deck.h"
#include "deckstock.h"
#include "someone.h"
#include "game.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Deck deck;
    DeckStock *deckStock = DeckStock::get();
    Game game;
    return a.exec();
}
