class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=INT_MIN;
        int sum=0;
        
        for(auto i :nums){
            sum+=i;
            
            if(sum>maximum) maximum=sum;
            
           
            
            if(sum<0) sum=0;
            
            
        }
        
        return maximum;
        
    }
};