class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int> (matrix[0].size()));

        for(int i=0;i<matrix.size();i++){
            dp[i][0]=matrix[i][0];
        }

        for(int i=0;i<matrix[0].size();i++){
            dp[0][i]=matrix[0][i];
        }

        for(int i =1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    dp[i][j]=min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) +1;
                }
            }
        }

        int ans=0;

        for(auto i:dp){
            for(auto j:i) ans+=j;
        }
          return ans;
    }

  
};