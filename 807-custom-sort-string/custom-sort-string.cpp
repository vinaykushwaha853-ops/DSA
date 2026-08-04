class Solution {
public:
    string customSortString(string order, string s) {

        unordered_map<char, int> mp;

        for (char ch : s)
            mp[ch]++;

        string ans = "";

        for (char ch : order) {
            while (mp[ch] > 0) {
                ans += ch;
                mp[ch]--;
            }
        }

        for (auto it : mp) {
            while (it.second > 0) {
                ans += it.first;
                it.second--;
            }
        }

        return ans;
    }
};