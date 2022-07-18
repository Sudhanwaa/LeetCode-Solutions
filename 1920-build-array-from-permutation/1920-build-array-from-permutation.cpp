class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        int index=*max_element(nums.begin(), nums.end());
        cout<<index;
        vector<int> vec;
        
        for(int i=0;i<index+1;i++){
            vec.push_back(nums[nums[i]]);
        }
        return vec;
        
    }
};