#ifndef GAME_H
#define GAME_H

#include "config.h"
#include "card.h"
#include "player.h"
#include "someone.h"
#include "dealer.h"

#include <QList>
#include <iostream>

using namespace std;

class Game
{
private:
    QList<Player*> players;
    Dealer dealer = new Player(new Someone());;
    void firstCardDeal();
    void fillPlayerList();
    void qDebugAllPlayerHands();
public:
    Game();
};

#endif // GAME_H
