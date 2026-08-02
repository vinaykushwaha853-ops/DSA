class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num: nums){
            freq[num]++;
        }
        int n=nums.size();
        for(auto item : freq){
            if(item.second>n/2){
                return item.first;
            }
        }

        return -1;
    }
};