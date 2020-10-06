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
    vector<int> leaves_of_1;
    vector<int> leaves_of_2;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs1(root1);
        dfs2(root2);
        
        if (leaves_of_1 == leaves_of_2)
            return true;
        else
            return false;
    }
    
    void dfs1(TreeNode* root)
    {
        if (root == NULL)
            return;
        if (root -> left)
        {
            dfs1(root -> left);
        }
        if (root -> right)
        {
            dfs1(root -> right);
        }
        if (root -> right == NULL && root -> left == NULL)
            leaves_of_1.push_back(root -> val);
        
        return;
    }
    
    void dfs2(TreeNode* root)
    {
        if (root == NULL)
            return;
        if (root -> left)
        {
            dfs2(root -> left);
        }
        if (root -> right)
        {
            dfs2(root -> right);
        }
        if (root -> right == NULL && root -> left == NULL)
            leaves_of_2.push_back(root -> val);
        
        return;
    }
};