class Solution {
public:
bool candivide(vector<int>&nums,int divisor,int threshold){
    int sum=0;
     for (int i = 0; i < nums.size(); i++) {
    sum+=(nums[i]+divisor-1)/divisor;
     }
     return sum<=threshold;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=0;
        for(int i=0;i<nums.size();i++){
            high =max(high,nums[i]); 
        }
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(candivide(nums,mid,threshold)){
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