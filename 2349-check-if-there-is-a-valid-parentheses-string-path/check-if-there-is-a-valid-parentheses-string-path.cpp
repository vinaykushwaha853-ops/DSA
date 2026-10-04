class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Total path length must be even
        if ((m + n - 1) % 2 != 0)
            return false;

        // Start must be '(' and end must be ')'
        if (grid[0][0] == ')' || grid[m - 1][n - 1] == '(')
            return false;

        vector<vector<vector<bool>>> dp(
            m,
            vector<vector<bool>>(
                n,
                vector<bool>(m + n, false)
            )
        );

        dp[0][0][1] = true;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                for (int balance = 0; balance < m + n; balance++) {

                    if (!dp[i][j][balance])
                        continue;

                    // Down
                    if (i + 1 < m) {
                        int newBalance = balance;

                        if (grid[i + 1][j] == '(')
                            newBalance++;
                        else
                            newBalance--;

                        if (newBalance >= 0 &&
                            newBalance < m + n) {
                            dp[i + 1][j][newBalance] = true;
                        }
                    }

                    // Right
                    if (j + 1 < n) {
                        int newBalance = balance;

                        if (grid[i][j + 1] == '(')
                            newBalance++;
                        else
                            newBalance--;

                        if (newBalance >= 0 &&
                            newBalance < m + n) {
                            dp[i][j + 1][newBalance] = true;
                        }
                    }
                }
            }
        }

        return dp[m - 1][n - 1][0];
    }
};