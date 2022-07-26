public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        
        int k=0;
        
        while(n!=0){
            if(n<0){
                k++;
            }
            n=n<<1;
        }
        
        return k;
    }
}