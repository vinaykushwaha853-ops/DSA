class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int prefix=0;
        int maxlenght=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                prefix+=-1;
            }
            else{prefix+=1;}
            if(mp.find(prefix)!=mp.end()){
                maxlenght=max(maxlenght,i-mp[prefix]);
            }
            else{
                mp[prefix]=i;
            }
        }
        return maxlenght;
    }
};