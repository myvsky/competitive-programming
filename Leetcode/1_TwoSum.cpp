// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    static vector<int> twoSum(vector<int>& nums, int target) 
    {
        // Create a vector with size of 2
        vector<int> res(2);
        // Iterate over nums
        for (int i = 0; i < nums.size(); i++)
        {
            // See if there's any fitting values among the rest of the vector
            auto num = find(nums.begin() + i + 1, nums.end(), target - nums[i]);
            if (num != nums.end()) 
            {
                res[0] = i;
                res[1] = num - nums.begin();
                break;
            }
        }
        return res;
    }
};