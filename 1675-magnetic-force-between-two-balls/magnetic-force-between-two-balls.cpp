class Solution {
public:
bool isposible(vector<int>& position,int m,int dist){
    int countball=1;
    int lastplace=position[0];
    for(int i=1;i<position.size();i++){
        if(position[i]-lastplace>=dist){
            countball++;
        lastplace=position[i];
        }
       if(countball>=m){
        return true;
       }
    }
    return false;

}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=1;
        int high=position[n-1]-position[0];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isposible(position,m,mid)){
                ans=mid;
                low= mid+1;
            }
            else{

                high=mid-1;
            }
        }

         return ans;

    }
};