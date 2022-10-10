#include <iostream>
using namespace std;
#define PI 3.14

class Shape
{
public:
    int base;
};

class Circle : public Shape
{
public:
    void getLength()
    {
        cout << "\nEnter radius of circle: ";
        cin >> base;
    }
    void printArea()
    {
        cout << "Area of circle is: " << (float)(base * base) * PI << endl;
    }
};

class Triangle : public Shape
{
public:
    int height;
    void getLength()
    {
        cout << "\nEnter base and height of triangle: ";
        cin >> base >> height;
    }
    void printArea()
    {
        cout << "Area of triangle is: " << (float)(base * height) * 0.5 << endl;
    }
};

class Rectangle : public Shape
{
public:
    int height;
    void getLength()
    {
        cout << "\nEnter base and height of rectangle: ";
        cin >> base >> height;
    }
    void printArea()
    {
        cout << "Area of rectangle is: " << (float)(base * height) << endl;
    }
};

int main()
{
    Circle ob1;
    ob1.getLength();
    ob1.printArea();

    Triangle ob2;
    ob2.getLength();
    ob2.printArea();

    Rectangle ob3;
    ob3.getLength();
    ob3.printArea();
    return 0;
}
