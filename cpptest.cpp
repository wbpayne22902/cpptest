#include <iostream>
#include <string>
using namespace std;
class Dog
{
public:
    Dog();
    ~Dog();
    Dog(int a);
    Dog(wstring nname);
    Dog(wstring nname, int nage);
    wstring getName() {
        return name;
    }
    void setName(wstring nname);
    Dog operator+(int n) {
        Dog tdog ;
        tdog.name = this->name;
        tdog.age = this->age + n;
        return tdog;
    }
    Dog operator-(int n) {
        Dog tmp;
        tmp.name = this->name;
        tmp.age = this->age - n;
        return tmp;
    }
    void operator++(int n) {
        age = age + 1;
        wcout<<"Unary incrementing age for "<<name<<"."<<endl;
    }
    Dog& operator+=(int n) {
        this->age += n;
        return *this;
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
Dog::Dog(int a) {
    name = L"Unknown";
    age = a;
}
Dog::Dog(wstring nname, int nage) {
    name = nname;
    age = nage;
    wcout<<L"Constructing dog with name "<<name<<L" and age "<<nage<<"."<<endl;
}

Dog::~Dog()
{
   // wcout<<L"Destroying "<<this->getName()<<endl;
}

void Dog::setName(wstring nname) {
    this->name = nname;
}
int Dog::getAge() {
    return this->age;
}
int main(int ac, char *av[]) {
    Dog Murphy(10);
    Dog mouse(L"Mouse Dog");
    Dog* spot = new Dog(L"Spot");
    Dog cork(L"Cork", 22);
    wcout<<"Spot name is "<<spot->getName()<<endl;
    wcout<<spot->getName()<<endl;
    wcout<<Murphy.getName()<<endl;
    Murphy.setName(L"Murphy Dog");
    wcout<<"Murphy newname = "<<Murphy.getName()<<endl;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    Murphy = Murphy + 22;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    Murphy = Murphy - 3;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    Murphy += 1000;
    wcout<<"M age = "<<Murphy.getAge()<<endl;
    wcout<<mouse.getName()<<endl;
    wcout<<L"Dog name "<<cork.getName()<<L" and age "<<cork.getAge()<<L"."<<endl;
    cork++;
    wcout<<L"Dog name "<<cork.getName()<<L" and age "<<cork.getAge()<<L"."<<endl;
    cout<<"Hello, World"<<endl;
    delete spot;
}

