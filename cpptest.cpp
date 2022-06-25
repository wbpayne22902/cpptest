#include <iostream>
#include <string>
using namespace std;
class Dog
{
public:
    Dog();
    ~Dog();
    Dog(wstring nname);
    Dog(wstring nname, int nage);
    wstring getName() {
        return name;
    }
    void setName(wstring nname);
    void operator+(int n) {
        age = age + n;
        cout<<"Incrementing age by "<<n<<"."<<endl;
    }
    void operator-(int n) {
        age = age - n;
        cout<<"Decrementing age by "<<n<<"."<<endl;
    }
    void operator++(int n) {
        age = age + 1;
        wcout<<"Unary indrementing age for "<<name<<"."<<endl;
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
Dog::Dog(wstring nname, int nage) {
    name = nname;
    age = nage;
    wcout<<L"Constructing dog with name "<<name<<L" and age "<<nage<<"."<<endl;
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
    Dog cork(L"Cork", 22);
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
    wcout<<L"Dog name "<<cork.getName()<<L" and age "<<cork.getAge()<<L"."<<endl;
    cork++;
    wcout<<L"Dog name "<<cork.getName()<<L" and age "<<cork.getAge()<<L"."<<endl;
    cout<<"Hello, World"<<endl;
    delete spot;
}

