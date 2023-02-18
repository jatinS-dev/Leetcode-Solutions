class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if (!root)
            return 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int sum = 0;
        while (q.size() > 1)
        {
            auto curr = q.front();
            q.pop();
            if (!curr)
            {
                q.push(NULL);
                sum = 0;
                continue;
            }
            sum += curr->val;
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        return sum;
    }
};