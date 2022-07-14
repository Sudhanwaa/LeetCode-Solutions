class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> vec;
        
        for(int i=0;i<m;i++){
            vec.push_back(nums1[i]);
        }
        
        nums1.clear();
        
        for(int i=0;i<vec.size();i++){
            nums1.push_back(vec[i]);
        }
        
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        
        
        sort(nums1.begin(),nums1.end());
    }
};