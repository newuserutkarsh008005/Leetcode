class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=1;
        long long str=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i]==prices[i-1]-1){
                str+=1;
            }
            else{
                str=1;
            }
            ans+=str;
        }
        return ans;
    }
};