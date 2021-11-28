class Solution {
public:
    int arrangeCoins(int n) {
        int c = n;
        int row = 0;
        while(true){
            if((c - (row + 1)) < 0){
                break;
            }
            row++;
            c -= row;
        }
        return row;
    }
};