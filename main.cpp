#include "oop.cpp"
#include "oop.h"

using namespace std;

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
