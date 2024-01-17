//                          LeetCode-1207. Unique Number of Occurrences
//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
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
    vector<int>arr = {26,2,16,16,5,5,26,2,5,20,20,5,2,20,2,2,20,2,16,20,16,17,16,2,16,20,26,16};
    if(s.uniqueOccurrences(arr)){
        cout<<"Unique Occurrences are present"<<endl;
    }
    else{
        cout<<"Unique Occurrences are not present"<<endl;
    }
    return 0;
}