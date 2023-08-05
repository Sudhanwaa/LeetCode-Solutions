class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vec;

        for(auto i : s){
            if(i=='a'|| i=='e' || i=='i' || i=='i' || i=='i' || i == 'o' || i== 'u' || i=='A' || i=='E' ||i=='I' ||i=='O' ||i=='U'  )
            vec.push_back(i);
        }

        reverse(vec.begin(),vec.end());
int j=0;
        for(auto &i:s){
           if(i=='a'|| i=='e' || i=='i' || i=='i' || i=='i' || i == 'o' || i== 'u' || i=='A' || i=='E' ||i=='I' ||i=='O' ||i=='U' ){
                i=vec[j];
                j++;
            }
        }

        return s;
    }
};