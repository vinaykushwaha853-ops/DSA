class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> st(jewels.begin(), jewels.end());

        int count = 0;

        for (char ch : stones) {

            if (st.count(ch))
                count++;
        }

        return count;
    }
};