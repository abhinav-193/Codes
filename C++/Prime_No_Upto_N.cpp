#include <bits/stdc++.h> 
using namespace std; 
vector<int> g1,g2;
void SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    prime[1]=true;
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        {  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=1; p<=n; p++) 
       if (prime[p]) 
          g1.push_back(p);
          else
          g2.push_back(p);
} 
int main() 
{ 
	int n;
    cin>>n;
    SieveOfEratosthenes(n); 
    for (int i = 0; i < g1.size(); i++) 
        cout << g1[i] << " ";
        
    cout<<endl;
    
    return 0; 
}
