#include <iostream>

using namespace std;

int binary_search(int [], int, int);

int main()
{

 int a[100], i, n, x;

 cout<<"How many numbers do you want to enter : ";
 cin>>n;
 cout<<"\nPlease enter the elements : ";
 for(i=0; i<n; ++i)
    {
     cout<<"\nElement "<<(i+1)<<" : ";
     cin>>a[i];
    }

 cout<<"\nEnter the element to be searched for : ";
 cin>>x;

 cout<<"\n The given array is : ";
 for(i=0; i<n; ++i)
    cout<<a[i]<<"\t";

 int p = binary_search(a, n, x);
 if(p!=-1)
   cout<<"\n\nThe given element is present in the position : "<<p+1;
 return 0;
}

int binary_search(int a[], int n, int x)
{
 int u=n-1, l=0, mid;

 for(int i=0; i<n; ++i)
    {

    mid = (l+u)/2;
  if(a[mid]<x)
     u = mid - 1;
  else if(a[mid]>x)

     l = mid + 1;


  else
    {

     cout<<"\nThe given element is present in the given array.";
     return(mid);

    }

     }
   if(!(l<=u))
     {
      cout<<"\nThe given element is not present in the given array.";
      return(-1);
     }
}
