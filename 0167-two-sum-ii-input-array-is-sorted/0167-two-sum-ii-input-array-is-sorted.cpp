class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> vec;
        int j=numbers.size()-1;
        int i=0;
       while(i!=j){
            
             if( (numbers[i]+numbers[j]) ==target) {
                 vec.push_back(i+1);
                 vec.push_back(j+1);
                 return vec;
                 
             }
            if( (numbers[i]+numbers[j]) >target) j--;
            
             if( (numbers[i]+numbers[j]) <target) i++;
            
        }
        return vec;
    }
};