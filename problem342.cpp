class Solution {
public:
    bool isPowerOfFour(int n) {
        //brute force
        if(n == 1)
            return true;
        while(n != 4){
         if(n % 4 != 0 || n < 0 || n == 0)
            return false;
          n /= 4;  
        }
        return true;
    }
};