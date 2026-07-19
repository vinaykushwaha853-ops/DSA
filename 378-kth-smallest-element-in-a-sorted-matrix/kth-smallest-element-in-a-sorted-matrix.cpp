class Solution {
public:
int countlessequal(vector<vector<int>>& matrix,int mid,int k){
          int count=0;
          int n = matrix.size();
          int row=0;
          int col= n-1;
          while(row<n&&col>=0){
            if(matrix[row][col]<=mid){
                count+=(col+1);
                row++;
            }
            else{
                col--;
            }
          }
          return count;

}
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int low=matrix[0][0];
        int high=matrix[n-1][n-1];
        while(low<high){
            int mid=low+(high-low)/2;
            if(countlessequal(matrix,mid,k)>=k){
                high=mid;

            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};