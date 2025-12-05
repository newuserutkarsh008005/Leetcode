class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++) {
            int k = 0;
            int j=potions.size()-1;
            bool found = false;
            int a=-1;
            while(k<=j){
                int mid=(k+j)/2;
                if((long long)potions[mid] * spells[i] >= success
){
                    found=true;
                    j=mid-1;
                    a=mid;
                }
                else{
                    k=mid+1;
                }
            }
            if(a!=-1){
                ans.push_back(potions.size()-a);
            }
            else{
                ans.push_back(0);
            }
            

            
        }
        return ans;
    }
};
