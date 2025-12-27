class Solution {
public:
    int maxArea(vector<int>& height) {
        int x=height.size();
        x-=1;
        int maxm=0;
        int i=0;
        while(i<x){
            int ht=min(height[i],height[x]);
            int wdth=x-i;
            int area=ht*wdth;
             maxm=max(maxm,area);
            if(height[i]<height[x]){
                i++;
            }
            else{
                x--;
            
            
            }
            
        }
        
return maxm;
    }
};