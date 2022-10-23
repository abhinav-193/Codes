
class Solution {
public:
     void helper(int index,vector<int> &A,vector<int> tempAns,vector<vector<int> > &ans)
{
    for(int i=index;i<A.size();i++)
    {
        tempAns.push_back(A[i]);
        ans.push_back(tempAns);
        helper(i+1,A,tempAns,ans);
        while(i<A.size()-1 && A[i] == A[i+1])
            i++;
        tempAns.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        ans.push_back(temp);
        if(nums.size()==0)
            return ans;
        sort(nums.begin(),nums.end());
        helper(index,nums,temp,ans);
        return ans;
    }
};