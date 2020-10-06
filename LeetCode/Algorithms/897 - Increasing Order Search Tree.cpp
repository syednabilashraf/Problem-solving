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
    vector<TreeNode*> nodes;
    TreeNode* increasingBST(TreeNode* root) {
        in_order_traverse(root);
        TreeNode* temp = new TreeNode(0);
        TreeNode* new_root = temp;
        for (auto node : nodes)
        {
            
            temp -> right = new TreeNode(node -> val);
            temp = temp -> right;
        }
        
        return new_root -> right;
    }
    
    void in_order_traverse(TreeNode* root)
    {
        if (root == NULL)
        {
            return;
        }
        
        if (root -> left)
        {
            in_order_traverse(root -> left);
        }
        nodes.push_back(root);
        if (root -> right)
        {
            in_order_traverse(root -> right);
        }
        return;
        
    }
};