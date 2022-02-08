class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        // my dumb way
        /*
        bool inc = true;
        if(arr.size() == 1) return false;
        for(int i = 0; i < arr.size() - 1; i++){
            if(inc){
                if(arr[i] < arr[i+1] && inc && i != arr.size() - 2){
                    continue;
                }else if((arr[i] > arr[i + 1] && i != 0)){
                    inc = false;
                }else{
                    return false;
                }
            }else{
                if(!(arr[i] > arr[i+1])) return false;
            }
        }
        return true;
        */
        // better but slower approach
        if (arr.size() < 3)
            return false;
        int i = 0, j = arr.size() - 1;
        while (i + 1 < arr.size() - 1 && arr[i] < arr[i + 1])
            i++;
        while (j - 1 > 0 && arr[j] < arr[j - 1])
            j--;
        return i == j;
    }
};