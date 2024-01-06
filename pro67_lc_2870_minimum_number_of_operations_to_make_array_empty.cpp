//                             LeetCode-2870. Minimum Number of Operations to Make Array Empty
// You are given a 0-indexed array nums consisting of positive integers.

// There are two types of operations that you can apply on the array any number of times:

// Choose two elements with equal values and delete them from the array.
// Choose three elements with equal values and delete them from the array.
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int minOperations(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (auto it : arr)
    {
        mp[it]++;
    }
    int ans = 0;
    // printMap(mp);
    for (auto it : mp)
    {
        int count = it.second;
        if (count == 1)
        { // opration is not possible for the count 1
            return -1;
        }
        if (count % 3 == 0)
        {
            ans += (count / 3);
        }
        else
        {
            if (count % 3 == 1)
            {
                ans += (count / 3) - 1 + 2;
            }
            else
            {
                if (count % 3 == 2)
                {
                    ans += (count / 3) + 1;
                }
            }
        }
    }
    return ans;
}
int main()
{
   vector<int>arr = {2,3,3,2,2,4,2,3,4};
   int ans = minOperations(arr);
   cout<<"Minimum opration to empty the array is: "<<ans<<endl;
    return 0;
}