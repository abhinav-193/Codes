//question link - https://leetcode.com/problems/length-of-last-word/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int lengthOfLastWord(string s)
    {
        int c=0;  
        for (int i = s.length()-1; i > 0; i--)
        {
            if(s.at(i)==' ')
            break;
            c++;
        }
        string str = s.substr(s.length()-c,s.length());             
        return str.length();
    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution ob;
    cout<<ob.lengthOfLastWord(s)<<endl;
    return 0;
}