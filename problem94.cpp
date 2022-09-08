/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inOrder(TreeNode* node, vector<int>& t){
        if(node == NULL)
            return;
        inOrder(node->left, t);
        t.push_back(node->val);
        inOrder(node->right, t);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> trav;
        inOrder(root, trav);
        return trav;
    }
};