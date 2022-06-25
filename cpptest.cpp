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
    void setName(wstring nname);
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

void Dog::setName(wstring nname) {
    this->name = nname;
}
int main(int ac, char *av[]) {
    Dog Murphy;
    Dog mouse(L"Mouse Dog");
    Dog* spot = new Dog(L"Spot");
    wcout<<"Spot name is "<<spot->getName()<<endl;
    delete spot;
    wcout<<spot->getName()<<endl;
    wcout<<Murphy.getName()<<endl;
    Murphy.setName(L"Murphy Dog");
    wcout<<"Murphy newname = "<<Murphy.getName()<<endl;
    wcout<<mouse.getName()<<endl;
    cout<<"Hello, World"<<endl;
}

