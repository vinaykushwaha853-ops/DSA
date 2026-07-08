class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]= 1;
        int prefix=0, count=0;
        for(int i=0;i<nums.size();i++){
            prefix += nums[i];
            count += mp[prefix-k];
            mp[prefix]++;
        }
        return count;




    }
};
/* class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Smart Diary (HashMap): Key = Sum, Value = Ginti (Frequency)
        unordered_map<int, int> mp;
        
        int current_sum = 0;
        int count = 0;
        
        // Base Case: Shuruat me 0 sum hamesha 1 baar hota hai
        mp[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            // 1. Prefix Sum: Jeb me paise jodte chalo
            current_sum += nums[i];
            
            // 2. Minus ka hissaab: Piche kya dhoondna hai?
            int remaining = current_sum - k;
            
            // 3. C++ ka tareeka check karne ka ki 'remaining' mila ya nahi
            if (mp.find(remaining) != mp.end()) {
                // Agar mila, toh uski Ginti (Value) ko count me jod lo
                count += mp[remaining];
            }
            
            // 4. Apne naye current_sum ki ginti diary me +1 kar do
            mp[current_sum]++;
        }
        
        return count;
    }
};*/