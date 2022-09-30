class Solution
{
public:
    void flatten(TreeNode *root)
    {
        // Time Complexity: O(N) where N is the number of nodes in the binary tree
        // Space Complexity: O(1)

        TreeNode *curr = root; // Curr = 1
        while (curr != NULL)
        {
            if (curr->left != NULL)
            {
                TreeNode *prev = curr->left;
                while (prev->right != NULL) // Find the last node
                {
                    prev = prev->right;
                }
                prev->right = curr->right; // Last Node (4) is Connected to root ->right
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};