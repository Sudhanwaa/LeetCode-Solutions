class Solution {
public:

int solve(int idx,vector<int>& days, vector<int>& cost,vector<int>& dp){

    if(idx>days.size()-1) return 0;
    
    if(dp[idx]!=-1) return dp[idx];
    int c1=cost[0]+ solve(idx+1,days,cost,dp);

    int i;
    for(i=idx;i<days.size()&& days[i]<days[idx]+7;i++);
    int c2=cost[1]+ solve(i,days,cost,dp);

    for(i=idx;i<days.size() && days[i]<days[idx]+30;i++);
    int c3=cost[2]+ solve(i,days,cost,dp);

    dp[idx] =min(c1,min(c2,c3));

    return dp[idx];

}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size(),-1);
        return solve(0,days,costs,dp);

        
    }
};