class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left =0;
        int zerocount=0;
        int max_lenght=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                zerocount++;
            }
            while(zerocount>1){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
            }
            max_lenght=max(max_lenght,right-left);

 }
 return max_lenght;
    }
};