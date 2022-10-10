// WAP  which  displays  a  given  character,  n  number  of  times,  using  afunction.  When the n value is not provided, it should print the given character80 times.  When both the character and n value is not provided, it should print‘*’ character 80 times.Write the above program using function overloading.
#include <iostream>
using namespace std;
void print(char ch, int n);
void print(char ch);
void print(void);
int main()
{
    int opt;
    cout<<"Choose the desired option:\n1.Give the character and no. of times you want to print it.\n2.Give only character.\n3.No value will be given."<<endl;
    cin>>opt;
    if(opt==1)
    {
        char c;
        int p;
        cout<<"Enter the character:"<<endl;
        cin>>c;
        cout<<"Enter the number of times:"<<endl;
        cin>>p;
        print(c,p);
    }
    else if (opt==2)
    {
        char c;
        cout<<"Enter the character:"<<endl;
        cin>>c;
        print(c);
    }
    else if (opt==3)
    {
        print();
    }
    else
    {
        cout<<"Invalid Option. Please try again.";
    }
}
void print(char ch, int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<ch;
    }
}
void print(char ch)
{
    int i;
    for ( i = 0; i < 80; i++)
    {
        cout<<ch;
    }
}
void print(void)
{
    int i;
    for ( i = 0; i < 80; i++)
    {
        cout<<"*";
    }   
}