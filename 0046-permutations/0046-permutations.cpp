class Solution {
public:
    void per(vector<int>&n,int ind,vector<vector<int>>&ans){
            // Base Case 

            if(ind==n.size()-1){
                ans.push_back({n});
                return ;
            }
        for(int i=ind;i<n.size();i++){
            swap(n[ind],n[i]);
            per(n,ind+1,ans);
            swap(n[ind],n[i]);// Backtracking
        }
    }
    vector<vector<int>> permute(vector<int>& n) {
        vector<vector<int>>ans;
        per(n,0,ans);
        return ans;
    }
};