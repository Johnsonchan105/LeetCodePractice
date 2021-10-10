class Solution {
    public boolean exist(char[][] board, String word) {
        char[] words = new char[word.length()];
        for(int t = 0; t < word.length() - 1; t++){
            words[t] = word.charAt(t);
        }
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[i].length; j++){
                for(int k = 0; k < words.length; k++){
                    if(board[i][j]== words[k]){
                        words[k] = '0';
                    }
                }
            }
        }
        for(int l = 0 ; l < words.length; l++){
            if (!(words[l] == '0')) {
                return false;
            }
        }
        return true;
    }
} 

