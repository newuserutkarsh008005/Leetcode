class Solution {
public:
set<vector<int>>s;
void per(vector<int>&n,int ind,vector<vector<int>>&ans){
            // Base Case 

            if(ind==n.size()-1){
                if(s.find(n)==s.end()){
                ans.push_back(n);
                s.insert(n);
                }
                return ;
            }
        for(int i=ind;i<n.size();i++){
            swap(n[ind],n[i]);
            per(n,ind+1,ans);
            swap(n[ind],n[i]);// Backtracking
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& n) {
        vector<vector<int>>ans;
        per(n,0,ans);
        return ans;
    }
    
};