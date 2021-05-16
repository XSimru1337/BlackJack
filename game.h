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
    QList<Player*> players;
    Dealer dealer = new Player(new Someone());
    Key key;

    void firstCardDeal();
    void fillPlayerList();
    void qDebugAllPlayerHands();
    void inputController(int key);
public:
    Game();
};

#endif // GAME_H
