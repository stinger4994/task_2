#include <iostream>
using namespace std;

#ifndef OOP
#define OOP

class Base
{
public:
    Base() { cout << "+ Собрать объект Base\n"; }
    ~Base() { cout << "+ Разобрать объект Base\n"; }

    virtual void func() const { cout << "+ Функция func() для класса Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "+ Собрать объект object\n"; }
    ~Child() { cout << "+ Разобрать объект object\n"; }

    void func() const { cout << "+ Функция func() для класса Child\n"; }
};

void Function(const Base &obj);

#endif // OOP
