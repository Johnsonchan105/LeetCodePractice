// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        /*
        for(int i = n; i >= 0; i--){
            if(!isBadVersion(i)){
                return i + 1;
            }
        }
        return -1;
        */
        int lower = 1, upper = n, mid;
        while (lower < upper)
        {
            mid = lower + (upper - lower) / 2;
            if (!isBadVersion(mid))
                lower = mid + 1;
            else
                upper = mid;
        }
        return lower;
    }
};