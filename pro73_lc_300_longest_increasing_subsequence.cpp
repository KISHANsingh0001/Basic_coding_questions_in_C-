//                                   Leetcode - 300. Longest Increasing Subsequence
// Given an integer array nums, return the length of the longest strictly increasing subsequence
// Input: nums = [10,9,2,5,3,7,101,18]
// Output: 4
// Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > ans.back())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
};
int main()
{
    Solution s;
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    int ans = s.lengthOfLIS(nums);
    cout << "longest increasing subsequnces is: " << ans;
    cout << endl;
    return 0;
}