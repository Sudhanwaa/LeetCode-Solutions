class Solution {
public:
    double myPow(double x, int n) {
        
      
        double ans=x;
        if(n==0) return 1.0;
        
        if(n>0){
            return pow(x,n);
        }
        
        
        else{
            ans=1/ans;
            if(isinf(pow(ans,abs(n)))==1) return 0.00000;
            return pow(ans,abs(n));
            
        }
    }
};