class Solution {
public:
    bool isHappy(int n) {
        
        

        
        // to store value each squares of digit
        int value = 0;
        // var to check index of the digit
        int index;
        // to store all the values of squares of digits
        set<int>s;
        
        while(1)
        {
            while(n)
            {
                index = n % 10;
                value += index*index;
                n = n/10;
            }
            // if value is 1, n is happy number
            if(value == 1)
            {
                return true;
            }
            // condition for n not being a happy number
            if(s.find(value) != s.end())
            {
                // value already exist in the s
                // so n is not happy number
                return false;
            }
            // value is neither 1 nor exist in s
            else
            {
                // insert value in the set
                s.insert(value);
            }
            // update n and value for further iteration
            n = value;
            value = 0;
        }
    
    }
};