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
int dia=0;
int islength(TreeNode* node)
{
    if(node==NULL) return 0;
    
    int left=islength(node->left);
    int right=islength(node->right);
    dia=max(dia,left+right);
    
    return 1+max(left,right);
}

    int diameterOfBinaryTree(TreeNode* root) {
        int length =islength(root);
        return dia;
    }
};