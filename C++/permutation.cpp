#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n==1)
	{
	    cout<<"-1"<<" ";
	return 0;
	    
	}
	for(int i=1; i<n+1; i++)
	{
	    if(n%2==0){
	    if(i%2!=0)
	    {
	    std::cout << i+1 <<" ";
	    }else{
	        std::cout << i-1 <<" ";
	    }
	    }else{
	        std::cout << -1 << std::endl;
	        break;
	    }
	        
	    }
	return 0;
}
