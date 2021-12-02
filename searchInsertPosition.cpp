class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //my stupid method
        /*
        int place = -1;
        if(nums.at(0) == target || nums.at(0) > target){
            return 0;
        }else if(nums.size() == 1 && nums.at(0) < target){
            return 1;
        }
        for(int i = 1; i < nums.size(); i++){
            if(nums.at(i) == target){
                return i;
            }
            if(nums.at(i) < target && i == nums.size() - 1){
                return i + 1;
            }
            if(nums.at(i - 1) < target && target <= nums.at(i)){
                place = i;
            }
            
        }
        return place;
        */
        //better method, iterative method
        int low = 0, high = nums.size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] > target) high = mid-1;
            
            else low = mid+1;
        }
        return low;

    }
};