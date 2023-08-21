class Solution {
public:

    void solve(int n ,int last, int & ans,vector<int> &dp){

        if(n==0){
            ans++;
            return ;
        }

        for(int i=0;i<5;i++){
            if(i>=last)
            solve(n-1,i,ans,dp);
        }
        dp[n]=ans;
    }

    int countVowelStrings(int n) {
        int ans=0;
        vector<int> dp(n+1,-1);
        solve(n,0,ans,dp);

        return ans;
    }
};