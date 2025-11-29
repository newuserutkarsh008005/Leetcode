class Solution {
public:
    int bin(vector<int>& arr,int st,int en){
        int mid=(st+en)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){
            return bin(arr,mid+1,en);
        }
        else{
            return bin(arr,st,mid-1);
        }
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return bin(arr,1,arr.size()-2);
    }
};