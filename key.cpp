#include "key.h"

SHORT GetAsyncKeyState(
  int vKey
);

int Key::trackKeys()
{
    if(GetAsyncKeyState(VK_RETURN)) return maybeReturnPressedKey(VK_RETURN);
    else if(GetAsyncKeyState(Qt::Key_Space)) return maybeReturnPressedKey(Qt::Key_Space);
    else pressed = false;
    return 0;
}

int Key::maybeReturnPressedKey(int key)
{
    if(!pressed) {
        pressed = true;
        return key;
    }
    return 0;
}

Key::Key()
{

}
