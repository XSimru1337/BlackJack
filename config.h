#ifndef CONFIG_H
#define CONFIG_H


#define DECK_COUNT 8
#define PLAYER_COUNT 2

#include <QList>
#include <QString>

enum color{PIG = 1 , KREUZ = 2,  KARO = 3, HERZ=4};

const QList<color> CARD_COLOR_LIST =    QList<color>() << PIG << KREUZ << KARO << HERZ;
const QList<QString> CARD_SYMBOL_LIST = QList<QString>() << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "J" << "Q" << "K" << "A";
const QList<int> CARD_VALUE_LIST =      QList<int>() << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10 << 10 << 10 << 10 << 11;

static int getCardValueBySymbole(QString symbol) { return CARD_VALUE_LIST[CARD_SYMBOL_LIST.indexOf(symbol)]; }

#endif // CONFIG_H
