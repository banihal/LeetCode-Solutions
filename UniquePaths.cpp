/*A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int ans[m][n];
        memset(ans, 0, sizeof(ans));
        for(int i = 0; i < m; i++)
            ans[i][n-1] = 1;
        for(int i = 0; i < n; i++)
            ans[m-1][i] = 1;
            
        for(int i = m-2; i >= 0; i--){
            for(int j = n-2; j >= 0; j--){
                ans[i][j] = ans[i+1][j] + ans[i][j+1];
            }
        }
        return ans[0][0];
    }
};
