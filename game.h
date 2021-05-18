#ifndef GAME_H
#define GAME_H

#include "config.h"
#include "card.h"
#include "player.h"
#include "someone.h"
#include "dealer.h"
#include "key.h"

#include <QList>
#include <iostream>

using namespace std;

class Game
{
private:
    DeckStock *deckStock;
    QList<Player*> players;
    Dealer dealer = new Player(new Someone());
    Key key;

    int currentPlayerIndex = 0;

    void firstCardDeal();
    void fillPlayerList();
    void qDebugAllPlayerHands();
    void inputController(int key);
    void resetHands();

    bool isHittable(int input);

    void playerInputLoop();

public:
    Game();
};

#endif // GAME_H
