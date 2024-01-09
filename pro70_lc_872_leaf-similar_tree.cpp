//                         LeetCode-872. Leaf-Similar Trees
/**            leaf_similar_trees
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
    void storeLefeNodeValue(TreeNode*& root , vector<int>&ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right==NULL){
            ans.push_back(root->val);
        }
        //L 
        storeLefeNodeValue(root->left , ans);
        //R
        storeLefeNodeValue(root->right , ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1){
            return false;
        }
        if(!root2){
            return false;
        }
        vector<int>ans1;
        vector<int>ans2;
        storeLefeNodeValue(root1 , ans1);
        storeLefeNodeValue(root2 , ans2);
        if(ans1.size() != ans2.size()){
            return false;
        }
   
        return ans1 == ans2;
    }
};