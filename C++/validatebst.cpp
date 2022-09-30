//BST inorder traversal is always sorted so if we get a sorted array then it means it is BST.
class Solution
{
public:
    // BST actually creates a sorted array so... traverse it inorder and you
    // should get a sorted array if it's not then it's not a BST
    vector<int> ans;

    void solve(TreeNode *node)
    {
        if (!node)
        {
            return;
        }

        solve(node->left);

        ans.push_back(node->val);

        solve(node->right);
    }

    bool isValidBST(TreeNode *root)
    {
        solve(root);

        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] >= ans[i + 1])
            {
                return false;
            }
        }

        return true;
    }
};

//check through recursion

class Solution
{
public:
    bool isvalid(TreeNode *root, long long int left, long long int right)
    {
        if (root->val <= left || root->val >= right)
            return false;
        if (root->left)
            if (!isvalid(root->left, left, root->val))
                return false;
        if (root->right)
            if (!isvalid(root->right, root->val, right))
                return false;
        return true;
    }

    bool isValidBST(TreeNode *root)
    {
        return isvalid(root, LLONG_MIN, LLONG_MAX);
    }
};
