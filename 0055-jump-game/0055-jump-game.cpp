class Solution {
public:
    bool canJump(vector<int>& nums) {

//         for(auto i: nums){
//             if(i>nums.size()) return true;
//         }
        
//         if(nums.size()==1 && nums[0]==0) return true;
        
//           if(nums.size()==1 && nums[0]==1) return true;
        
//          if(nums.size()==1 && nums[0]!=0) return false;
        
//         int last=nums.size()-1;
        
//         for(int i=0;i<nums.size();i++){
            
//             if(i+nums[i]==last) return true;
            
//             if(i+nums[i]>last) return true;
            
//             if(nums[i]==0) return false;
//             int j=i;
//             if(i+nums[i]<last){
//                 while(j>last){
                    
//                     if(nums[j]==0 && j>=i) return false;
                    
//                     if(j+nums[j]==last)  return true;
                    
//                     if(j+nums[j]>last) return true;
                    
//                     else{
//                         j+=nums[j];
//                     }
//                 }
//             }
//         }
        
        int goal=nums.size()-1;
        
        for(int i =nums.size()-1;i>-1;i--){
            if(i + nums[i]>=goal) goal=i;
        }
        
        if(goal==0) return true;
        else return false;
    }
};