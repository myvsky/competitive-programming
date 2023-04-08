// https://leetcode.com/problems/two-sum/

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. 
Input has exactly one solution.
Return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9   Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

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

int main()
{
    int n, a, target;
    vector<int> nums;
    cout << "Input length of nums array:\n";
    cin >> n;
    cout << "Input values:\n";
    for (int i = 0; i < n ; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    cout << "Input target:\n";
    cin >> target;
    nums = Solution::twoSum(nums, target);
    cout << "Result:\n";
    for (int i = 0; i < nums.size(); i++) cout << nums[i] << " ";

    return 0;
}