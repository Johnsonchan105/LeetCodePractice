#include <queue>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        priority_queue<char> inS;
        priority_queue<char> inT;
        for(int i = 0; i < s.length(); i++){
            inS.push(s[i]);
            inT.push(t[i]);
        }
        while(!inS.empty()){
            if(inS.top() != inT.top()){
                return false;
            }
            inS.pop();
            inT.pop();
        }
        return true;
    }
};