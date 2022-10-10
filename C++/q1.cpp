// WAP to find area of a circle, a rectangle and a triangle, using concept of function overloading.
#include <iostream>
using namespace std;
void area(float r);
void area(int l, int w);
void area(float b,float h);
int main()
{
    int a,b;
    float c,d,e;
    cout<<"Enter the value of radius: "<<endl;
    cin>>c;
    cout<<"The area of circle is: ";
    area(c);
    cout<<"\nEnter the value of length: "<<endl;
    cin>>a;
    cout<<"\nEnter the value of width: "<<endl;
    cin>>b;
    cout<<"\nThe area of rectangle is: ";
    area(a,b);
    cout<<"\nEnter the value of base: "<<endl;
    cin>>d;
    cout<<"\nEnter the value of height: "<<endl;
    cin>>e;
    cout<<"\nThe area of triangle is: ";
    area(d,e);
    return 0;
}
void area(float a)
{
    float area=3.14*a*a;
    cout<<area;
}
void area(int l, int w)
{
    int area=l*w;
    cout<<area;
}
void area(float b, float h)
{
    float area=0.5*b*h;
    cout<<area;
}