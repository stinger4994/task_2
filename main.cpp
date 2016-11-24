#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "+ Собрать объект Base\n"; }
    ~Base() { cout << "+ Разобрать объект Base\n"; }
};


int main(int argc, char *argv[])
{
    cout << "+ Создать объект Base" << endl;
        Base base;

        cout << "Создание и удаление объекта" << endl;

        return 0;
}
