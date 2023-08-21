class Solution {
public:
    int solve(int idx,vector<int>& satisfaction,int time,vector<vector<int>> &dp){

        if(idx==satisfaction.size()) return 0;

        if(dp[idx][time]!=-1) return dp[idx][time];

        int inc=(time+1)*satisfaction[idx] + solve(idx+1,satisfaction,time+1,dp);
        int exc=0+ solve(idx+1,satisfaction,time,dp);

        return dp[idx][time] =max(inc,exc);
        // return max(inc,exc);;
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());

        vector<vector<int>> dp(satisfaction.size()+1,vector<int> (satisfaction.size()+1,-1));

        return solve(0,satisfaction,0,dp);
    }
};