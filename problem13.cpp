#include <string>
class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(getVal(s[i]) < getVal(s[i+1])){
                sum += getVal(s[i+1]) - getVal(s[i]);
                i++;
                continue;
            }
            sum += getVal(s[i]);
        }
        return sum;
    }
    int getVal(char a){
        int sum = 0;
        switch(a){
            case 'I': sum += 1; break;
            case 'V': sum += 5; break;
            case 'X': sum += 10; break;
            case 'L': sum += 50; break;
            case 'C': sum += 100; break;
            case 'D': sum += 500; break;
            case 'M': sum += 1000; break;
            default: sum += INT_MIN;
        }
        return sum;
    }
};