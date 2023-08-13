class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        map<char,int> m1,m2;
        
        for(auto i:word1){
            m1[i]++;
        }
        
        for(auto i: word2){
            m2[i]++;
        }
        
        vector<int> vec1,vec2;
        vector<char> v1,v2;
        
        for(auto i: m1){
            v1.push_back(i.first);
            vec1.push_back(i.second);
        }
        for(auto i: m2){
            v2.push_back(i.first);
            vec2.push_back(i.second);
        }
        
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        
        if(vec1==vec2 && v1==v2){
            return true;
        }
        
        return false;
        
    }
};