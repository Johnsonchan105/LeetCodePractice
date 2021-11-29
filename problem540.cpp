class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        //my method
        /*
        if(nums.size() == 1){
            return nums.at(0);
        }
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums.at(i) == nums.at(i + 1)){
                i++;
            }else{
                return nums.at(i);
            }
        }
        if(nums.at(nums.size() - 1) != nums.at(nums.size() - 2)){
            return nums.at(nums.size() - 1);
        }
        return -1;
        */
        //binary search method
        int low = 0, high = nums.size() - 2;

        while (low <= high)
        {

            int mid = low + (high - low) / 2;

            // If we are on left side, move right
            if (nums[mid] == nums[mid ^ 1])
                low = mid + 1;
            // if we are on right side, move left
            else
                high = mid - 1;
        }

        return nums[low];
    }
};