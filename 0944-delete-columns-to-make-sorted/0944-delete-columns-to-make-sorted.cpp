class Solution {
public:
    int minDeletionSize(vector<string>& strs) {

        int cls=strs[0].size();
        int rws=strs.size();
        int c=0;
        if(rws==1){
            if(!is_sorted(strs[0].begin(),strs[0].end())){
                c+=1;
            return c;
            }
        }
            for(int j=0;j<cls;j++){
        for(int i=1;i<rws;i++){
                if(strs[i][j]<strs[i-1][j]){
                    c+=1;
                    break;
                }
            }
        }

          return c;  
        
    }
};