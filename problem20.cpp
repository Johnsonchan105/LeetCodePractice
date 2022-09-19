class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 1){
            return false;
        }
        stack<char> booma;
        map<char, char> pairs;
        pairs.insert(pair<char, char>('}', '{'));
        pairs.insert(pair<char, char>(')', '('));
        pairs.insert(pair<char, char>(']', '['));
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                booma.push(s[i]);
            }else if(booma.empty() || pairs[s[i]] != booma.top()){
                return false;
            }else {
                booma.pop();
            }
        }
        if(booma.empty()){
            return true;
        }
        return false;
    }
};