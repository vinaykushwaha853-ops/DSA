class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++){
          int row=indices[i][0];
          int column=indices[i][1];

            // add +1 in row
             for(int j=0;j<n;j++){
                matrix[row][j]++;
             }
             for(int k=0;k<m;k++){
                matrix[k][column]++;
             }

        }
        int count =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((matrix[i][j])%2 != 0) count++;
            }
        }
       return count; 
        
    }
};