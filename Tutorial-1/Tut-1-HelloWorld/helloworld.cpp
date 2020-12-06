#include "helloworld.h"

HelloWorld::HelloWorld(QObject *parent) : QObject(parent)
{

}

void HelloWorld::new_message()
{
    QString msg;
    switch (_state)
    {
        case 0: msg = "Hello from Signal"; break;
        case 1: msg = "You clicked again??"; break;
        case 2: msg = "Oh come on, how many times!!!"; break;
    }
    _state++;
    if (_state > 2) _state = 0;
    emit hello_message(msg);
}

