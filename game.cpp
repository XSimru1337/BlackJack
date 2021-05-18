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
    for(int playerIndex = 0; playerIndex < players.size(); playerIndex++)
        players[playerIndex]->qDebugHandWithIndex(playerIndex);
    dealer.qDebugHand();
    qDebug();
}

void Game::inputController(int key)
{
    switch (key) {
        case 0: break;
        case VK_RETURN:     players[currentPlayerIndex]->hitCard(); break;
        case Qt::Key_S:     players[currentPlayerIndex]->action_split();   break;
        case Qt::Key_D:     players[currentPlayerIndex]->action_double();  break;
    }
}

void Game::resetHands()
{
    dealer.resetHand();
    for(int i = 0; i < PLAYER_COUNT; i++ ) {
        players[i]->resetHand();
    }
}

bool Game::isHittable(int input)
{
    if(input != Qt::Key_Space && players[currentPlayerIndex]->calcHandSum() < 21) return true;
    else return false;
}

void Game::playerInputLoop()
{
    int tmpInput;
    do {
        tmpInput = key.waitForKeyInput();
        inputController(tmpInput);
        if(tmpInput != Qt::Key_Space) players[currentPlayerIndex]->qDebugHandWithIndex(currentPlayerIndex);
    } while(isHittable(tmpInput));
}

Game::Game()
{
    fillPlayerList();
    deckStock = DeckStock::get();

    while (true) {
        firstCardDeal();
        qDebugAllPlayerHands();

        for(currentPlayerIndex = 0; currentPlayerIndex < PLAYER_COUNT; currentPlayerIndex++) {
            players[currentPlayerIndex]->qDebugHandWithIndex(currentPlayerIndex);
            playerInputLoop(); // 21 oder space bei welcher hand von player? split nicht vergessen!
            qDebug(); // Zeilenumbruch
        }
        dealer.qDebugHand();
        dealer.dealerLoop();

        resetHands();
    }
}
