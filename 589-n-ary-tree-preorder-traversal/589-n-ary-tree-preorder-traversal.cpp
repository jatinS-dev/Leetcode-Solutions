/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void Preorder(Node* root, vector<int>&v) {
        if(root == NULL) return;
        v.push_back(root->val);
        for(int i = 0; i < root->children.size(); ++i) {
            Preorder(root->children[i], v);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        Preorder(root, ans);
        return ans;
    }
};