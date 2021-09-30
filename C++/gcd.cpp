//program to print gcd of two numbers
#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{

    int a,b;
    cout<<"Enter the first number whose gcd to be found : ";
    cin>>a;
    cout<<"Enter the second number whose gcd is to be found : ";
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}
