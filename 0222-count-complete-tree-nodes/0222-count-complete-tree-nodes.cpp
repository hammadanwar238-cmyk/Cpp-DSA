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
    int countNodes(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int lh = 0;
        int rh = 0;

        // Find left height
        TreeNode* temp = root;
        while (temp != NULL) {
            lh++;
            temp = temp->left;
        }

        // Find right height
        temp = root;
        while (temp != NULL) {
            rh++;
            temp = temp->right;
        }

        // Perfect binary tree
        if (lh == rh) {
            return (1 << lh) - 1;
        }

        // Otherwise, recursively count
        return countNodes(root->left) + 
               countNodes(root->right) + 1;
    }
};