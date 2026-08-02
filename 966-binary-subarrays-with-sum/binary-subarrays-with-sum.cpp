class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        int count =0;
        int prefixsum= 0;
        mp[0]=1;
        for(int item: nums){
           prefixsum += item;
           if(mp.count(prefixsum-goal)){
            count += mp[prefixsum-goal];
           }
           mp[prefixsum]++;
        }
        return count;
    }
};