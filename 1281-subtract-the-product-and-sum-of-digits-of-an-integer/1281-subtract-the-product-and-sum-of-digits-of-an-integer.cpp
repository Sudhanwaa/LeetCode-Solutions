class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int a=1,b=0;

        int temp=n;

        while(temp!=0){
            a*=temp%10;
            temp/=10;
        }
    temp=n;
        while(temp!=0){
            b+=temp%10;
            temp/=10;
        }
        return a-b;
    }
};