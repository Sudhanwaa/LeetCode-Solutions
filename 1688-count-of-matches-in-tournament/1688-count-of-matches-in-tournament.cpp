class Solution {
public:
    int numberOfMatches(int n) {
        
        int count=0;
        
        while(n!=0){
        
        if(n%2==0){ count+=n/2;
                   n-=n/2;
                  }
        
        if(n%2!=0){
            count++;
            n-=1;
            count+=n/2;
            n-=n/2;
        }
            
        }
        return count-1;
    }
};