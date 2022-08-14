/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* findAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
        TreeNode* store;
        if(p->val > root->val && q->val > root->val){
            store = findAncestor(root->right, p, q);
        }else if(p->val < root->val && q->val < root->val){
            store = findAncestor(root->left, p , q);
        }else{
            store = root;
        }
        return store;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return findAncestor(root, p, q);
    }
};