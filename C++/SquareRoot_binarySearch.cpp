#include<bits/stdc++.h>
using namespace std;

int sqrtBin(long long int n)
{
	long long l, r, mid, flag=0;
	l=1;
	r=n/2;
	while(l<r)
	{
		mid=(l+r)/2;
		if(mid*mid==n)
		{
			flag =1;
			break;
		}
		else if(mid*mid>n)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	if (flag==0)
	{
		return(-1);
	}
	else
	{
		return(mid);
	}
}


int main()
{
	long long n;
	cout<<"Enter Integer to find square root of"<<endl;
	cin>>n;
	
	/* Traditional Way
	for(long long int i=1;i<n/2;i++)
	{
		if(i*i==n)
		{
			cout<<i<<endl;
			break;
		}
	}*/

	// Using Binary Search

	long long root = sqrtBin(n);
	if (root == -1)
	{
		cout<<"Not a perfect Square. No integer root exists"<<endl;
	}
	else
	{
		cout<<"Square root of "<<n<<" is "<<root<<endl;
	}

}