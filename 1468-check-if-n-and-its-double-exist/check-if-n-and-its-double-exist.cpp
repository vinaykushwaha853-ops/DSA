class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> st;
        for(int item :arr){
       
            if(st.count(item*2)){
                return true;
            }
            if(item % 2==0 && st.count(item/2)){
                return true;

            }
             st.insert(item); 
        }
        return false;
    }
};
/* class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) {
                    return true;
                }
            }
        }

        return false;
    }
};*/



/*
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] == 2 * arr[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};
*/