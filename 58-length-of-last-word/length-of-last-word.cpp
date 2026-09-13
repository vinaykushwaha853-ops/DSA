class Solution {
public:
    int lengthOfLastWord(string s) {

        int i = s.size() - 1;
        int len = 0;

        while (i >= 0 && s[i] == ' ')
            i--;

        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};

// 2 method to
int count =0
for(int i=s.size()-1;i>=0;i--){
    if(s[i]==' ' && count>0){
        break;
    }
    if(s[i]!= ' '){
        count++;
    }
}
