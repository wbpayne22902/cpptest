#include <iostream>
#include <string>
using namespace std;
class Dog
{
public:
    Dog();
    ~Dog();
    Dog(wstring nname);
    wstring getName() {
        return name;
    }
private:
    wstring name;

};
Dog::Dog(wstring nname) {
    this->name = nname;
}
Dog::Dog()
{
    name = L"Unknown";
}

Dog::~Dog()
{
    wcout<<L"Destroying "<<this->getName()<<endl;
}

int main(int ac, char *av[]) {
    Dog Murphy;
    Dog mouse(L"Mouse Dog");
    wcout<<Murphy.getName()<<endl;
    wcout<<mouse.getName()<<endl;
    cout<<"Hello, World"<<endl;
}