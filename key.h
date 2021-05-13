#ifndef KEY_H
#define KEY_H

#include <iostream>
#include <unistd.h>
#include <QtCore>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

class Key
{
private:
    bool pressed = false;
    bool key_1 = false;
    bool key_2 = false;

public:
    Key();
    bool isKeyPressed(int key);
    bool getKey_1() const;
    bool getKey_2() const;

    int trackKeys();
};

#endif // KEY_H
