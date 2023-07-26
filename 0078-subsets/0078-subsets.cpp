class Solution {
public:

void solve(vector<int> nums,vector<vector<int>> &ans,vector<int> temp,int idx){

    if(idx>nums.size()-1){ ans.push_back(temp);return;}

    // exclude 
    solve(nums,ans,temp,idx+1);

    // include
    temp.push_back(nums[idx]);
    solve(nums,ans,temp,idx+1);

    
    


}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        int idx=0;

        solve(nums,ans,temp,idx);
        return ans;

    }
};