class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> num;
        if (nums.size() == 2 && nums[0] != nums[1])
        {
            return nums;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums.at(i) == nums.at(i + 1))
            {
                i++;
            }
            else
            {
                num.push_back(nums.at(i));
            }
        }
        if (nums.at(nums.size() - 1) != nums.at(nums.size() - 2))
        {
            num.push_back(nums.at(nums.size() - 1));
        }
        return num;
    }
};