class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<int> vec;
        int count =0;
        
        
        // for(auto i : nums) cout<<i<<" ";
        int j=-1;
        
        for(int i =1;i<nums.size();i++){
            
            j++;
            
             if(nums[i]!=nums[j]) count=0;
            
           if(nums[i]==nums[j]) count++;
            
            if(count>=1) vec.push_back(nums[i]);
            
            
            
        }
        
        return vec;
        
    }
};