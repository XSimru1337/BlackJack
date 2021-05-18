#ifndef DEALER_H
#define DEALER_H

#include "someone.h"
#include <unistd.h>

class Dealer : public Someone
{
public:
    Dealer(Someone *parent = 0);

    void dealerLoop();
    int getHitValue() { return HIT_SOFT_SEVENTEEN ? 17 : 16; }
    bool isHandSoft();
    int calcHandSumWithoutAce();
    void qDebugHand();
};

#endif // DEALER_H
