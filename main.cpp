#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ Собрать объект Base\n"; }
    ~Base() { cout << "+ Разобрать объект Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "+ Собрать объект Child\n"; }
    ~Child() { cout << "+ Разобрать объект Child\n"; }
};

int main(int argc, char *argv[])
{
    cout << "+ Создать объект Base" << endl;
    Base base;
    cout << "+ Создать объект Child" << endl;
    Child child;

    cout << "Создание и удаление двух объектов. Применение наследования" << endl;

    return 0;
}
