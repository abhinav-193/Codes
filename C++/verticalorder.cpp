//// revise again and again diffuicult

#define ff first
#define ss second
static bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.ss == b.ss)
    {
        return a.ff < b.ff;
    }
    return a.ss < b.ss;
}
class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, vector<pair<int, int>>> mp;

        queue<pair<TreeNode *, int>> q;
    
        q.push({root, 0});
        int level = 0;

        while (!q.empty())
        {
            int n = q.size();

            for (int i = 0; i < n; i++)
            {
                auto front = q.front();
                q.pop();

                auto node = front.ff;
                int d = front.ss;

                mp[d].push_back({node->val, level});

                if (node->left)
                {
                    q.push({node->left, d - 1});
                }
                if (node->right)
                {
                    q.push({node->right, d + 1});
                }
            }
            level++;
        }

        vector<vector<int>> ans;

        for (auto it : mp)
        {
            sort(it.ss.begin(), it.ss.end(), cmp);
            vector<int> temp;
            for (auto i : it.ss)
            {
                temp.push_back(i.ff);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};