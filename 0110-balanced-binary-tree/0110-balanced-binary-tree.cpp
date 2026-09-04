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
int retunheight(TreeNode* node){
if(node==NULL) return 0;
int left=retunheight(node->left);
if(left==-1) return -1;

int right=retunheight(node->right);
if(right==-1) return -1;
if(abs(left-right)>1) return -1;
 return max(left,right)+1;
}
    bool isBalanced(TreeNode* root) {
    if(retunheight(root)==-1)
    {
        return false;
    }
    else{
        return true;
    }
    }
};