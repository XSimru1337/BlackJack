#ifndef CONFIG_H
#define CONFIG_H


#define DECK_COUNT 8

#include <QList>

enum color{PIG = 1 , KREUZ = 2,  KARO = 3, HERZ=4};

//struct colors {
//    QString colorName;
//    int colorID;
//};

const QList<color> CARD_COLOR_LIST = QList<color>() << PIG << KREUZ << KARO << HERZ;
const QList<QString> CARD_SYMBOL_LIST = QList<QString>() << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10" << "J" << "Q" << "K" << "A";

#endif // CONFIG_H
