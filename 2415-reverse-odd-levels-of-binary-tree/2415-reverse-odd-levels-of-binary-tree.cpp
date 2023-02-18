class Solution {
private:
    void dfs(TreeNode *p, TreeNode *q, int lvl)
    {
        if(!p && !q)
            return;
        if(lvl % 2 && p && q)
            swap(p->val, q->val);
        
        // swap the value of left's left children with value of right's right children
        dfs(p->left, q->right, lvl+1);

        // swap the value of left's right children with value of right's left children
        dfs(p->right, q->left, lvl+1);
    }
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root->left && root->right)
            dfs(root->left, root->right, 1);
        return root;
    }
};