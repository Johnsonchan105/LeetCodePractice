class Solution
{
public:
    void swap(vector<int> &n, int i, int j)
    {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = nums.size() - 1; j >= 0; j--)
            {
                if (nums[i] % 2 == 1 && nums[j] % 2 == 0)
                {
                    swap(nums, i, j);
                }
            }
        }
        return nums;
    }
};