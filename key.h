#ifndef KEY_H
#define KEY_H

#include <QtCore>
#include <windows.h>

class Key
{
private:
    bool pressed = false;

public:
    Key();

    int trackKeys();
    int maybeReturnPressedKey(int key);
};

#endif // KEY_H
