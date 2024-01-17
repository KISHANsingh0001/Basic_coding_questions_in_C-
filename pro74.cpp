//                          LeetCode-1207. Unique Number of Occurrences
//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> st;
        for(auto i: arr) mp[i]++;
        for(auto i: mp) st.insert(i.second);
        return st.size() == mp.size();
    }
};
int main()
{   Solution s;
    vector<int>arr = {1,2,2,3,3,4,4};
    if(s.uniqueOccurrences(arr)){
        cout<<"Unique Occurrences are present"<<endl;
    }
    else{
        cout<<"Unique Occurrences are not present"<<endl;
    }
    return 0;
}