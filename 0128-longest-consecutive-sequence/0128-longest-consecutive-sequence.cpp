class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0) return 0;
        vector<int> vec;
        
        sort(nums.begin(),nums.end());
        // for(auto i:nums) cout<<i;
        int count=1;
        int i=0;
        
        for(int j=1;j<nums.size();j++){
            
            if(nums[j]-nums[i]==0) {cout<<"Sudi";}
            
            if(nums[j]-nums[i]==1){
                count++;
            }
            
            if(nums[j]-nums[i]>1){
                vec.push_back(count);
                count=1;
            }
           i++;
        }
        vec.push_back(count);
        sort(vec.begin(),vec.end());
        
  
        int idx=vec.size()-1;
        return vec[idx];
    }
};