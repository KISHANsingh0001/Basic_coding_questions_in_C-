//                   leetcode question number _lc(169)_majority_Element
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. 
// You may assume that the majority element always exists in the array.       Input: nums = [2,2,1,1,1,2,2]
//                                                                            Output: 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int majorityElement(vector<int>& v) {
        sort(v.begin() , v.end());
        int s = 0;
        int e = v.size()-1;
        int mid = s + (e-s)/2;
        return v[mid];
    }

int main()
{
    
    vector<int> v{2,2,1,1,1,2,2};
    int ans = majorityElement(v);
    cout<<"Majority element is : "<<ans;
    return 0;
}
