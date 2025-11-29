class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans(t.size(),0);
        stack<int>s;
    int j=t.size()-1;
    ans[j]=0;
    s.push(j);
    j--;
    while(j>=0){
    if(!s.empty() && t[j]>=t[s.top()]){
        while(!s.empty() && t[j]>=t[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans[j]=0;
            s.push(j);
        }
        else{
            ans[j]=s.top()-j;
            s.push(j);
        }
        j--;
    }
    else{
        ans[j]=s.top()-j;
        s.push(j);
        j--;
    }}
    return ans;
    }
};