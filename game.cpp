#include "game.h"

void Game::firstCardDeal()
{
    for(int i = 0; i < 2; i++)
        for(int playerIndex = 0; playerIndex < players.size(); playerIndex++) {
            players[i]->hitCard();
        }

}

void Game::fillPlayerList()
{
    for(int i = 0; i < PLAYER_COUNT; i++)
        players << new Player(new Someone());
}

void Game::qDebugAllPlayerHands()
{
    for(int playerIndex = 0; playerIndex < players.size(); playerIndex++) {
        QString tmpHndString = "P ";
        for(int cardIndex = 0; cardIndex < players[playerIndex]->getHand().size(); cardIndex++) {
            tmpHndString += "[" + players[playerIndex]->getHand()[cardIndex]->getSymbol() + "] ";
        }
        tmpHndString += " -> " + QString::number(players[playerIndex]->calcHandSum());
        qDebug() << tmpHndString;
    }
}

Game::Game()
{
    fillPlayerList();
    firstCardDeal();
    qDebugAllPlayerHands();
}
