class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int a = nums[0], b = 0, c = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            c = max(a, b);
            a = b + nums[i];
            b = c;
        }
        return max(a, b);
    }
};