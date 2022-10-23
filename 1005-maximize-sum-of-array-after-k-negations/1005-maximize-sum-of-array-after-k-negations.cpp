class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
     int sum = 0,i=0,length=nums.size();
        sort(nums.begin(), nums.end());
        while(nums[i]<0 && i<length){
            if(k<=0)
                break;
            nums[i] *= -1;
            i++;
            k--;
        }
        sort(nums.begin(), nums.end());
        if(k>0 && nums[0]!=0)
            if(k%2)
                nums[0] *= -1;
        for(auto x:nums){
            sum += x;
        }
        return sum;
    }
    
};