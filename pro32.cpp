//            Leetcode question number 136. Single Number    Input: nums = [4,1,2,1,2]
//                                                           Output: 4
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;
int findSinglenumber(vector<int> &nums)
{

    unordered_map<int, int> hash;
    for (auto x : nums)
    {
        hash[x]++;
    }
    for (auto n : hash)
    {
        if (n.second == 1)
        {
            return n.first;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    int ans = findSinglenumber(nums);
    cout << "single number is : " << ans;
    return 0;
}