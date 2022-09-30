// bfs leftto right then right to left

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        if (!root)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        bool flag = true;
        while (!q.empty())
        {
            int n = q.size();
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
                v.push_back(curr->val);
            }
            if (flag)
                res.push_back(v);
            else
            {
                reverse(begin(v), end(v));
                res.push_back(v);
            }
            flag = !flag;
        }
        return res;
    }
};