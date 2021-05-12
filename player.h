#ifndef PLAYER_H
#define PLAYER_H

#include "someone.h"

class Player : public Someone
{
public:
    Player(Someone *parent = 0 );
};

#endif // PLAYER_H
