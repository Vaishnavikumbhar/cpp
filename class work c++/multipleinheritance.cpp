#include <iostream>
using namespace std;
class Mammal
{
public:
    Mammal()
    {
        cout<<"Mammals can give a direct birth \n";
    }
};
class WingedAnimal
{
public:
    WingedAnimal()
    {
        cout<<"WingedAnimal can flap\n";
    }
};
class Bat:public Mammal,public WingedAnimal{};
int main()
{
    Bat b1;
//    Mammal Mammal();
    return 0;
}
