class Solution {
private:
    void dfs(TreeNode *p, TreeNode *q, int lvl) {
        if(!p && !q)
            return;
        if(lvl % 2 && p && q)
            swap(p->val, q->val);
        
        dfs(p->left, q->right, lvl+1);
        dfs(p->right, q->left, lvl+1);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root->left && root->right)
            dfs(root->left, root->right, 1);
        return root;
    }
};