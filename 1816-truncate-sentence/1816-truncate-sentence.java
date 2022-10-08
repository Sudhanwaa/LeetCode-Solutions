class Solution {
    public String truncateSentence(String s, int k) {
        String sr = "";
        String[] arr = s.split(" ");
        for(int i=1;i<=k;i++){
         if(i == k){
            sr += arr[i-1];   
         }
         else{
             sr += arr[i-1] + " ";
         }
        }
        return sr;
    }
}