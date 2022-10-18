class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> dupli(nums.size(),-1);
        
        for(int i =0;i<nums.size();i++){
            int pos= (i+k)%nums.size();
            dupli[pos]=nums[i];
        }
        
        for(int i=0;i<dupli.size();i++){
            nums[i]=dupli[i];
        }
        
        
    }
};