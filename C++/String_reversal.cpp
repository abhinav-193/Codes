// c++ code to reverse a string
      
#include<iostream>             
#include<string.h>      
             
using namespace std;
        
int main ()
{
    char sentence[50], temp;
    int i, j;
    cout << "Enter string : ";      
    gets(sentence);      
    j = strlen(sentence) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = temp;
    }
    cout<<"\nReverse string : "<<sentence;
    return 0;
}
      
