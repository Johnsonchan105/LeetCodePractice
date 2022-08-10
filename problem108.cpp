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
    void treeHelper(vector<int> n, int low, int high, TreeNode* &r){
        if(low > high) 
            return;
        int med = (high+low)/2;
        r = new TreeNode(n[med]);
        treeHelper(n, low, med - 1, r->left);
        treeHelper(n, med + 1, high, r->right);
        
    }
    TreeNode* makeTree(vector<int> n){
        TreeNode* r;
        treeHelper(n, 0, n.size()-1, r);
        return r;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root = makeTree(nums);
        return root;
    }
};