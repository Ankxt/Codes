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
    int val=0;
    vector<int> solve(TreeNode* a, TreeNode* b){
        if(a==NULL){
            return {b->val,b->val};
        }
        vector<int> v=solve(a->left,a),v1=solve(a->right,b);
        val=max({val,abs(a->val-v[1]),abs(a->val-v[0]),abs(a->val-v1[0]),abs(a->val-v1[1])});
        return {max({a->val,v[0],v[1],v1[1],v1[0]}),min({a->val,v[0],v[1],v1[1],v1[0]})};
    }
    int maxAncestorDiff(TreeNode* a) {
        solve(a,a);
        return val;
    }
};