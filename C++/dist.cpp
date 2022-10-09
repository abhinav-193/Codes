/*
Create a class distance which stores a distane in feet and inches. Input 2 distance values 
in objects, add them, store the resultant distance in an object and display it.
Return the resultant object C3=C1.add(C2)
*/

#include <iostream>
using namespace std;

class add
{
    double feet;
    double inch;

    public:
        void input();
        add calc(add );
        void display();
};

void add::input()
{
    cout<<"Enter the distance in feet and inches respectively : ";
    cin>>feet>>inch;
}

add add::calc(add a1)
{
    add c;
    c.feet=a1.feet+feet;
    c.inch = a1.inch + inch;
    
    while(c.inch>11)
    {
        c.inch=inch-12;
        c.feet = feet+1;
    }

    return c;
}

void add::display()
{
    cout<<"The resultant summation of distance is "<<feet<<" feet and "<<inch<<" inches"<<endl;
}

int main()
{
    add c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1.calc(c2);
    c3.display();

    return 0;
}