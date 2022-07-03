class Solution {
public:
    bool isPowerOfFour(int n) {
        
          if(n==1) return true;
        int count=0;
        while(true){
            
            long ans=pow(4,count);
            
            if(ans>n) return false;
            
            if(ans==n || 0-ans==n) return true;
            
            count++;
        }
        
    }
};