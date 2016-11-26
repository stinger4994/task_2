#include "oop.h"

void Function(const Base &obj)
{
    cout << "+ Вызов метода func() для объекта obj" << endl;
    obj.func();
}
