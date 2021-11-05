class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        int num = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums.at(i - 1) != nums.at(i))
            {
                nums[++num] = nums[i];
            }
        }
        return ++num;
    }
};