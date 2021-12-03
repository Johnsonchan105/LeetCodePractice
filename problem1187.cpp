//probably works but takes way too long and time exceeds
class Solution {
public:
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        vector<int> answers;
        for(int i = 0; i < puzzles.size(); i++){
            answers.push_back(findValids(puzzles.at(i), words));
        }
        return answers;
        
    }
    int findValids(string puzzle, vector<string>& words){
        int val = 0;
        for(int i = 0; i < words.size(); i++){
            if(validWord(puzzle, words.at(i))){
                val++;
            }
        }
        return val;
    }
    bool validWord(string p, string w){
        if(w.find(p.at(0)) == string::npos){
            return false;
        }
        for(int i = 0; i < w.size(); i++){
            if(p.find(w.at(i)) == string::npos){
                return false;
            }
        }
        return true;
    }
};