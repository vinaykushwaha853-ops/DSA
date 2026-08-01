class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
          return {};
    }
  
};

method2 by hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for(int i=0; i<nums.size();i++){
        int required=target-nums[i];
        if(mp.count(required)){
            return {mp[required],i};
        }

        mp[nums[i]]=i;

    }
    return { };
    }
  
};
