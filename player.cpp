#include "player.h"

Player::Player(Someone *parent)
{

}

void Player::action_split()
{

}

void Player::action_double()
{

}

void Player::action_stand()
{

}

void Player::action_hitCard()
{

}

void Player::qDebugHandWithIndex(int index)
{
    qDebug() << "Player" << index+1 << this->getDebugHandString() << this->calcHandSum();
}
