#include "game.h"

void Game::firstCardDeal()
{
    for(int i = 0; i < 2; i++) {
        for(int playerIndex = 0; playerIndex < players.size(); playerIndex++) {
            players[i]->hitCard();
        }
        dealer.hitCard();
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

    QString tmpHndString = "D ";
    for(int cardIndex = 0; cardIndex < dealer.getHand().size(); cardIndex++) {
        tmpHndString += "[" + dealer.getHand()[cardIndex]->getSymbol() + "] ";
    }
    tmpHndString += " -> " + QString::number(dealer.calcHandSum());
    qDebug() << tmpHndString;
}

void Game::inputController(int key)
{
    switch (key) {
        case 0: /* Nothing */ break;
        case VK_RETURN: qDebug()     << "Return"; break;
        case Qt::Key_Space: qDebug() << "Space"; break;
        case Qt::Key_S: qDebug()     << "S"; break;
        case Qt::Key_D: qDebug()     << "D"; break;
    }
}

Game::Game()
{
    fillPlayerList();
    firstCardDeal();
    qDebugAllPlayerHands();

    while (true) {
        inputController(key.trackKeys());
    }
}
