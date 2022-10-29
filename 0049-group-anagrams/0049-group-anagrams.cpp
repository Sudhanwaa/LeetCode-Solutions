#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        
        vector<string> vec;
        vector<vector<string>> ans;
        vector<string> temp;
        temp=strs;
        vector<bool> check;
        
        for(auto i: temp) check.push_back(false);
        
        if(strs.size()==0) {
            ans.push_back(vec);
            return ans;
        }
        
        if(strs.size()==1){
             ans.push_back(strs);
            return ans;
        }
        
    
        for(int i=0;i<temp.size();i++){
            sort(temp[i].begin(),temp[i].end());
        }
        
      for(int i=0;i<strs.size();i++){
          
          if(!check[i]) vec.push_back(strs[i]);
          check[0]=true;
          
          for(int j=i+1;j<strs.size();j++){
            
              
              if((temp[i]==temp[j]) && !check[j]){
                  vec.push_back(strs[j]);
                  check[j]=true;
              }
              
          }
          
          if(vec.size()!=0) ans.push_back(vec);
          vec.clear();
      }
        return ans;
    }
};