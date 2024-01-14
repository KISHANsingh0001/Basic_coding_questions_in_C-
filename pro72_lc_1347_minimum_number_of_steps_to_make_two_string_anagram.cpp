//                               LeetCode-1347. Minimum Number of Steps to Make Two Strings Anagram
#include <iostream>
#include<string>
using namespace std;
int minSteps(string &s, string &t)
{
    int arr1[26] = {0};
    int arr2[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        arr1[s[i] - 'a']++;
        arr2[t[i] - 'a']++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr2[i] < arr1[i])
        {
            count += arr1[i] - arr2[i];
        }
    }
    return count;
}
int main()
{
     string s = "leetcode";
     string t = "practice";
     int ans = minSteps(s , t);
     cout<<"Minimum "<< ans <<" step to make string "<<s<<" To angram of "<<t<<endl;
    return 0;
}