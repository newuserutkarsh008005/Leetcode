class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string w="";
        int n1=word1.size();
        int n2=word2.size();
        int i=0;
        int j=0;
        while(i<n1 &&j<n2){
            w+=word1[i];
            i++;
            w+=word2[j];
            j++;
        }
        if(i<n1){
            while(i<n1){
                w+=word1[i];
                i++;
            }
        }
        if(j<n2){
            while(j<n2){
                w+=word2[j];
                j++;
            }
        }
return w;
    }
};