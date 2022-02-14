class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        int left = 0;
        if (root->left != nullptr)
            left = 1 + maxDepth(root->left);
        int right = 0;
        if (root->right != nullptr)
            right = 1 + maxDepth(root->right);
        return max(left, right);
    }
};