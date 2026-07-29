class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
      for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
      } 
       for(int i=0;i<s.size();i++){
        if(freq[s[i]-'a']==1)
        return i;
      }  
      return -1; 

    }
};Agar question me sirf lowercase letters (a-z) hon → int freq[26] use karo. Ye fastest aur least memory use karta hai.
Agar characters kuch bhi ho sakte hain (uppercase, lowercase, digits, symbols, Unicode, etc.) → unordered_map<char, int> use karo.
Main bhi interview me

class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> frequency;

        // Count frequency
        for (int i = 0; i < s.length(); i++)
        {
            frequency[s[i]]++;
        }

        // Find first unique character
        for (int i = 0; i < s.length(); i++)
        {
            if (frequency[s[i]] == 1)
            {
                return i;
            }
        }

        return -1;
    }
};
