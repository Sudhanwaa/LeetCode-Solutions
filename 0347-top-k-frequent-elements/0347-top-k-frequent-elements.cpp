class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> map;
       int count=0;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
       } 
       vector<pair<int,int>> vect;
       for(auto itr : map){
           vect.push_back(make_pair(itr.second,itr.first));
       }
       sort(vect.begin(),vect.end(),greater());
       for(auto itr : vect){
           if(count==k){
               break;
           }
           ans.push_back(itr.second);
           count++;
       }
    return ans;
    }
};