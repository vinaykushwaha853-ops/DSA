class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!= t.size())
       return false;
       int freq[26]={0};
       for(int i=0;i<s.size();i++){
          freq[s[i]-'a']++;
       }
        for(int i=0;i<t.size();i++){
          freq[t[i]-'a']--;
       }
       for(int i=0;i<26;i++){
        if(freq[i]!=0)
        return false;
       }
       return true;


    }
};
Agar question me sirf lowercase English letters hain → int freq[26] ⭐ (Best)
Agar uppercase, lowercase, Unicode ya generic characters ho sakte hain → unordered_map<char,int> ⭐

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> frequency;

        for (int i = 0; i < s.length(); i++)
        {
            frequency[s[i]]++;
            frequency[t[i]]--;
        }

        for (auto item : frequency)
        {
            if (item.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};
