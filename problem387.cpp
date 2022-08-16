class Solution {
public:
    int firstUniqChar(string s) {
        for(int i = 0; i < s.length(); i++){
            bool t = false;
            for(int j = 0; j < s.length(); j++){
                if(s[i] == s[j] && i != j){
                    t = true;
                    break;
                }
            }
            if(!t)
                return i;
        }
        return -1;
    }
};