class Solution {
public:
vector<vector<int>>dp;
int lcs(string &s1,string &s2,int i,int j){

    if(i<0||j<0){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]){
        int asc=int (s1[i]);
        return dp[i][j]=lcs(s1,s2,i-1,j-1)+s1[i];}
    else{

return dp[i][j]= max(lcs(s1,s2,i-1,j),
lcs(s1,s2,i,j-1));
    }
}
    int minimumDeleteSum(string s1, string s2) {
        int i=s1.size()-1;
    int j=s2.size()-1;
    int ans=0;
    int st1=0;
    int st2=0;
    for(char c:s1){
st1+=c;
    }
    for(char c:s2){
st2+=c;
    }
    dp.assign(s1.size(),vector<int>(s2.size(),-1));
    ans=st1+st2-2*(lcs(s1,s2,i,j));
    return ans;
    }
};