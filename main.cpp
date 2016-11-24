#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ Собрать объект Base\n"; }
    ~Base() { cout << "+ Разобрать объект Base\n"; }

    void func() const { cout << "+ Функция func() класса Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "+ Собрать объект Child\n"; }
    ~Child() { cout << "+ Разобрать объект Child\n"; }

    void func() const { cout << "+ Функция func() класса Child\n"; }
};

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

    cout << "* Добавление процедуры с перегрузкой функции для нового объекта" << endl;

    return 0;
}
