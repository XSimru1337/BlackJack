#ifndef DEALER_H
#define DEALER_H

#include "someone.h"

class Dealer : public Someone
{
public:
    Dealer(Someone *parent = 0);
};

#endif // DEALER_H
