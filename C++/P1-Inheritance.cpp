#include <iostream>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "\nBase Class 1";
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "\nBase Class 2";
    }
};

class SingleInheritance : public Base1
{
public:
    SingleInheritance()
    {
        cout << "\nDerived class 1 for single inheritance";
    }
};

class MultipleInheritance : public Base1, public Base2
{
public:
    MultipleInheritance()
    {
        cout << "\nDerived class 2 for multiple inheritance";
    }
};

class MultiLevelInheritance : public SingleInheritance
{
public:
    MultiLevelInheritance()
    {
        cout << "\nDerived class 3 for multilevel inheritance";
    }
};

int main(){
    cout<<"\nSingle Inheritance:";
    SingleInheritance ob1;
    cout<<"\n\nMultiple Inheritance:";
    MultipleInheritance ob2;
    cout<<"\n\nMultiLevel Inheritance:";
    MultiLevelInheritance ob3;
    return 0;
}
