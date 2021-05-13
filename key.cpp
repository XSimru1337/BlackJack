#include "key.h"

SHORT GetAsyncKeyState(
  int vKey
);

int Key::trackKeys()
{
    if(isKeyPressed(Qt::Key_1) && !pressed) {
        key_1 = pressed ? false : true;
        pressed = true;
        return Qt::Key_1;
    } else if(isKeyPressed(Qt::Key_2) && !pressed) {
        key_2 = pressed ? false : true;
        pressed = true;
        return Qt::Key_2;
    } else if(!isKeyPressed(Qt::Key_1) && !isKeyPressed(Qt::Key_2)) {
        pressed = false;
    }
    return 0;
}

Key::Key()
{

}

bool Key::isKeyPressed(int key)
{
    return GetAsyncKeyState(key);
}
