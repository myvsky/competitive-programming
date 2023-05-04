// https://leetcode.com/problems/maximum-subarray/

// We can use Kadane's algorithm here

#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // We store current subarray sum and compare it with the best that we have
        // Initially the best value is nums[0], the sum is in neutral position (=0)
        int sum = 0, best = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            // Find which one option is better: removing the previous subarray or
            // keeping it and adding the current nums[i]
            sum = max(nums[i], sum+nums[i]);
            // If it's the best we've ever found, store it in the best value
            best = max(best, sum);
        }

        return best;
    }
};
