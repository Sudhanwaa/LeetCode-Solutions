class Solution {
public:

    void solve(int l,int r,vector<string> &ans,string temp,int n){
        if(temp.size()==2*n) {
            ans.push_back(temp);
            return;
        }

        if(l<n){

            solve(l+1,r,ans,temp+"(",n);
        }

        if(r<l){
            
            solve(l,r+1,ans,temp+")",n);
        }

    }
    vector<string> generateParenthesis(int n) {
         vector<string> ans;
         int l=0,r=0;
         solve(l,r,ans,"",n);
         return ans;
    }
};