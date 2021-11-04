#include <iostream>
#include <vector>
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums;
        for (int i = 0; i < nums1.size(); i++)
        {
            bool found = false, greater = false;
            int j;
            for (j = 0; j < nums2.size(); j++)
            {
                if (nums2.at(j) == nums1.at(i))
                    found = true;
                if (found && nums2.at(j) > nums1.at(i))
                {
                    greater = true;
                    break;
                }
            }
            (greater) ? nums.push_back(nums2.at(j)) : nums.push_back(-1);
        }
        return nums;
    }
};