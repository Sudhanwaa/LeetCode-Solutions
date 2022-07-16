class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.length();
        string p = "";
        
        for(int i=0; i<n; i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                p.push_back(tolower(s[i]));
            }
            
            else if(s[i] >= 97 && s[i] <= 122)
            {
                p.push_back(s[i]);
            }
            
            else if(s[i] >= 48 && s[i] <= 57)
            {
                p.push_back(s[i]);
            }
        }
        
        int x = p.length();
        
        for(int i=0; i<x/2; i++)
        {
            if(p[i] != p[x-i-1])
                return false;
        }
        
        return true;
    }
};