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
    void operator+(int n) {
        age = age + n;
        cout<<"Incrementing age!"<<endl;
    }
    void operator-(int n) {
        age = age - n;
        cout<<"Decrementing age by "<<n<<"."<<endl;
    }
    int getAge();
private:
    wstring name;
    int age;

};
Dog::Dog(wstring nname) {
    this->name = nname;
    this->age = 0;
}
Dog::Dog()
{
    name = L"Unknown";
    age = 0;
}

Dog::~Dog()
{
    wcout<<L"Destroying "<<this->getName()<<endl;
}

void Dog::setName(wstring nname) {
    this->name = nname;
}
int Dog::getAge() {
    return this->age;
}
int main(int ac, char *av[]) {
    Dog Murphy;
    Dog mouse(L"Mouse Dog");
    Dog* spot = new Dog(L"Spot");
    wcout<<"Spot name is "<<spot->getName()<<endl;
    wcout<<spot->getName()<<endl;
    wcout<<Murphy.getName()<<endl;
    Murphy.setName(L"Murphy Dog");
    wcout<<"Murphy newname = "<<Murphy.getName()<<endl;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    Murphy + 1;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    Murphy - 3;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    wcout<<mouse.getName()<<endl;
    cout<<"Hello, World"<<endl;
    delete spot;
}

