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
pair<int, int> dfs(TreeNode* node, int& matchingNodes) {
        if (!node) return {0, 0};

        auto [leftSum, leftCount] = dfs(node->left, matchingNodes);
        auto [rightSum, rightCount] = dfs(node->right, matchingNodes);

        int currentSum = leftSum + rightSum + node->val;
        int currentCount = leftCount + rightCount + 1;

        if (currentSum / currentCount == node->val) {
            matchingNodes++;
        }

        return {currentSum, currentCount};
    }
    int averageOfSubtree(TreeNode* root) {
      int matchingNodes = 0;
        dfs(root, matchingNodes);
        return matchingNodes;
    }
};