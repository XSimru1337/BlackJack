#ifndef PLAYER_H
#define PLAYER_H

#include "someone.h"

class Player : public Someone
{
public:
    Player(Someone *parent = 0 );
    void action_split();
    void action_double();
    void action_stand();
    void action_hitCard();
    void qDebugHandWithIndex(int index);
};

#endif // PLAYER_H
