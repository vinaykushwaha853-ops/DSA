class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> frequency;
        for(int i=0;i<arr.size();i++){
            frequency[arr[i]]++;
        }

        unordered_set<int>usedfreq;
        for( auto item : frequency){
            int currentfreq= item.second;
            if(usedfreq.count(currentfreq)){
                return false;
            }
            usedfreq.insert(currentfreq);

        }
        return true;
    }
};