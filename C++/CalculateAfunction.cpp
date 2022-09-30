#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n=0;
	cin>>n;
	long long b=0;
	if(n%2==0)
	b=b+n/2;
	if(n%2!=0)
	b=b+((n+1)/2)*(-1);
	cout<<b<<endl;
	return 0;
}
