#include <iostream>
#include "oop.h"

using namespace std;

void Function(const Base &obj)
{
    cout << "+ Вызов метода func() для объекта obj" << endl;
    obj.func();
}

int main(int argc, char *argv[])
{
    cout << "+ Создать объект Base" << endl;
    Base base;

    cout << "+ Создать объект Child" << endl;
    Child child;

    cout << "+ Вызов метода func() для объекта Base" << endl;
    Function(base);

    cout << "+ Вызов метода func() для объекта Child" << endl;
    Function(child);

    return 0;
}
