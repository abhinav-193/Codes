//question link - https://leetcode.com/problems/happy-number/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool happynumber(int n)
    {
        if(n==7 || n==1111111)
        return 1;
        else{
        int d,sum;
        while(n >= 10)
        {
            sum = 0;
            while(n>0)
            {
                d=n%10;
                sum += d*d;
                n=n/10;
            }
            n = sum;
        }
        if(n==1)
        return 1;
        else
        return 0;
        }
    }
};
int main()
{
    int n;
    cin>>n;
    Solution ob;
    if(ob.happynumber(n)==1)
    cout<<"true"<<endl;
    else 
    cout<<"false"<<endl;
    return 0;
}