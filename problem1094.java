class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        int numPeople = 0;
        int max = Integer.MIN_VALUE;
        for(int i = 0; i < trips.length; i++){
            max = (trips[i][2] > max)? trips[i][2] : max;
        }
        for(int j = 0; j < max; j++){
            for(int k = 0; k < trips.length; k++){
                if(j == trips[k][1]){
                    numPeople += trips[k][0];
                }
                if(j == trips[k][2]){
                    numPeople -= trips[k][0];
                }
            }
            if(numPeople > capacity){
                return false;
            }
        }
        return true;
    }
}