//                       LeetCode-2236. 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;_root_equals_sum_of_children
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool checkTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->left == NULL && front->right == NULL){
                continue;
            }
            int sum = 0;
            if(front->left){
                sum+=front->left->val;
                q.push(front->left);

            }
            if(front->right){
                sum += front->right->val;
                q.push(front->right);
            }
            if(sum != front->val){
                return false;
            }
        }
        return true;
    }
};