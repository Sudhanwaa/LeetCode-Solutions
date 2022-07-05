class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     
        vector<int> vec;
        int index;
        for(auto i : nums1){
            vec.push_back(i);
        }
        
        for(auto i : nums2){
            vec.push_back(i);
        }
        
        sort(vec.begin(),vec.end());
        
        if(vec.size()%2!=0){
                index=vec.size()/2 ;
            return vec[index];
        }
        
        else{
            index=vec.size()/2;
            double ans=(vec[index-1] + vec[index])/2.0;
           
            return ans ;
        }
        
    }
};