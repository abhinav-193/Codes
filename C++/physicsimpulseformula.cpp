#include<iostream>
#include<string>
#include<algorithm>
#include <iterator>
#include <map>
#include<vector>
 
using namespace std;
int main()
{
  float l,p,q;
  cin>>l>>p>>q;
 
  float t=l/(p+q);
 
  if(p==q)
  {
    std::cout << l/2 << std::endl;
  }else{
    std::cout << p*t << std::endl;
  }
 
return 0;
}
