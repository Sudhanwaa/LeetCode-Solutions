class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        vector<int> ans(n);
        
        for(int i=n-2; i>=0; i--){
            left[i] = left[i+1]*nums[i+1];
        }
        
        ans[0] = left[0]; 
        
        for(int i=1; i<n; i++){
            right[i] = right[i-1]*nums[i-1];
            ans[i] = left[i]*right[i];
        }
        
        return ans;
    }
};