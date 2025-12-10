class Solution {
public:
   set<vector<int>>s;
    void combinall(vector<int>& candidates,vector<int>& combin,vector<vector<int>>&ans,int i, int target){
// base case
if(i==candidates.size()|| target<0){
    return ;
}
if(target==0){
    if(s.find(combin)==s.end()){
    ans.push_back(combin);
    s.insert(combin);

    }
    return;
}

//single inclusion

combin.push_back(candidates[i]);
combinall(candidates,combin,ans,i+1,target-candidates[i]);
//multiple
combinall(candidates,combin,ans,i,target-candidates[i]);
//exclusion 

combin.pop_back();

combinall(candidates,combin,ans,i+1,target);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<int>combin;
     vector<vector<int>>ans;
     combinall(candidates,combin,ans,0,target);
     return ans;   
    }
};