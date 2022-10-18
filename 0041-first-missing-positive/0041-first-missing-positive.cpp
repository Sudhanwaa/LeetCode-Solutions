class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        vector<int> dupli;
        set<int> dupli_set;
        for(auto i : nums){
            if(i>0){
                dupli_set.insert(i);
            }
        }
         for(auto i : dupli_set){
            cout<<i;
        }
        
        int ans;
        
        for(auto i: dupli_set){
            dupli.push_back(i);
        }
        sort(dupli.begin(),dupli.end());
        
        for(int i=1;i<dupli.size()+1;i++){
            if(dupli[i-1]!=i){
                ans=i;
                break;
            }
        }
        // cout<<"SUhdanwa";
       
        
        return ans;
    }
};