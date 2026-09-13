class Solution {
public:
    string sortString(string s) {

        int freq[26] = {0};

        // Frequency count
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        string ans = "";

        while(ans.size() < s.size()) {

            // a -> z
            for(int i = 0; i < 26; i++) {
                if(freq[i] > 0) {
                    ans += char(i + 'a');
                    freq[i]--;
                }
            }

            // z -> a
            for(int i = 25; i >= 0; i--) {
                if(freq[i] > 0) {
                    ans += char(i + 'a');
                    freq[i]--;
                }
            }
        }

        return ans;
    }
};