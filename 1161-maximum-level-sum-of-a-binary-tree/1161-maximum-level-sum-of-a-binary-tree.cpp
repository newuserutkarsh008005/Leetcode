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
    int maxLevelSum(TreeNode* root) {
        while(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);
int lvl=1;
int sum=0;
int mxm=INT_MIN;
int vl=1;
        while(!q.empty()){
            sum=0;
            int qsz=q.size();
            for(int i=0;i<qsz;i++){
            TreeNode* node=q.front();
            q.pop();
            sum+=node->val;
            if(node->left)q.push(node->left);
            if(node->right) q.push(node->right);
            }
            if(mxm<sum){
                mxm=sum;
                vl=lvl;
            }
            lvl+=1;
        }
        return vl;
    }
};