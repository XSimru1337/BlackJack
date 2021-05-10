#ifndef CONFIG_H
#define CONFIG_H


#define DECK_COUNT 8

#include <QList>

enum color {
    PIG = 1,
    Kreuz = 2,
    Karo = 3,
    Herz = 4
};

const QList<color> CARD_COLOR_LIST = QList<color>() << PIG << Kreuz << Karo << Herz;
const QList<QString> CARD_SYMBOL_LIST = QList<QString>() << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "J" << "Q" << "K" << "A";

#endif // CONFIG_H
