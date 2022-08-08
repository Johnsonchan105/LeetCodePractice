class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        //dynamic programming
        /*
        vector<int> store(nums.size() , 1);
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    store[i] = max(store[i], store[j] + 1);
                }
            }
        }
        return *max_element(store.begin(), store.end());
        */
        //tail method
        vector<int> store;
        for(int num: nums){
            if(store.empty()||num > store.back()){
                store.push_back(num);
            }else{
                store[firstGreatEqual(store, num)] = num;
            }
        }
        return store.size();
    }
    private:
        int firstGreatEqual(vector<int>& t, int tr){
            //find index of target element
            //lower bound solves from binary search 
            return lower_bound(t.begin(), t.end(), tr) - t.begin();
        }
};