#include <iostream> 
#include<stdlib.h>
#include <math.h>
using namespace std;

class dist
{
    private:
        double a[2];
        double b[2];
        double d;
    public:
        
        void input();
        void display();

};


void dist::input()
{
    cout<<"Enter the corrdinates for point 1"<<endl;
    cin>>a[0]>>a[1];

     cout<<"Enter the corrdinates for point 2"<<endl;
    cin>>b[0]>>b[1];


}

void dist::display()
{
    d=sqrt(pow((b[1]-a[1]),2) + pow((b[0]-a[0]),2));
    cout<<"The distance between the points is "<<d<<endl;

}

int main()
{
    dist dis; 
    dis.input();
    dis.display();
    return 0;
}