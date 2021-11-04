#include <iostream>
#include <vector>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> sums;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if ((nums.at(i) + nums.at(j)) == target)
                {
                    sums.push_back(i);
                    sums.push_back(j);
                    break;
                }
            }
        }
        return sums;
    }
};