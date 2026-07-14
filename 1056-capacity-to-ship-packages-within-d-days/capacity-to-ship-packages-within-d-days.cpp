class Solution {
public:
bool canship(vector<int>&weights,int capacity,int days){
int totaldays=1;
int currentweight=0;

for (int i = 0; i < weights.size(); i++) {
if(currentweight + weights[i]>capacity){
    totaldays++;
    currentweight= weights[i];
}
else{
    currentweight+= weights[i];
}
}
 return totaldays<=days;}

    int shipWithinDays(vector<int>& weights, int days) {
        int low=0;
        int high =0;
    for(int i=0;i<weights.size();i++){
        low=max(low,weights[i]);
        high+=weights[i];
    }
    int ans=high;
    while(low<=high){
     int mid=low+(high-low)/2;
     if(canship(weights,mid,days)){
        ans=mid;
        high=mid-1;
     }
     else{
        low=mid+1;
     }
    }
    return ans;
    }
};