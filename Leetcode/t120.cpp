class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
     vector<vector<int>> dp(triangle.size(),vector<int> (triangle.size(),0));
     for(int i=0;i<triangle.size();i++)//先给最后一行赋值  从倒数第二行开始_倒三角
         dp[triangle.size()-1][i]=triangle[triangle.size()-1][i];
     for(int i=triangle.size()-2;i>=0;i--) {
         for(int j=0;j<i+1;j++) {
            dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j];
         }
     }
     return dp[0][0];
    }
};
