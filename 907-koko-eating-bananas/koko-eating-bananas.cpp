class Solution {
public:
int CanEatAll(vector<int>& piles,int speed,int h){
      long long total_hours=0;
    for(int i=0;i<piles.size();i++){
        total_hours+=(piles[i]+speed-1)/speed;
}
 return total_hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;//minimus speeed should be atleast 1 requires
        int high=0;
        for(int i=0;i<piles.size();i++){
            high=max(high,piles[i]);
        }
        int ans=high;
       while(low<=high){
        int mid= low +(high-low)/2;
        if(CanEatAll(piles,mid,h)){
            ans=mid;
            high=mid-1;
        }
        else{ low=mid+1;
        }
       }
       return ans;
    }
};