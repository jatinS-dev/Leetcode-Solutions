class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        invertTree(root->right);
        invertTree(root->left);
        swap(root->right, root->left);
        return root;
    }
};