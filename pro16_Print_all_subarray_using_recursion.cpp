//        _Print_all_subarray_using_recursion 
#include<iostream>
#include<vector>
using namespace std;
void printSubarray_utill(vector<int>& nums , int start , int end){
    // base case 
    if(end == nums.size()) 
    return;

    for(int i = start ; i<=end ; i++){
       cout<<nums[i]<<" "; 
    }
    cout<<endl;

    printSubarray_utill(nums , start , end+1);
}

void printSubarray(vector<int> &nums){
    for(int start = 0; start<nums.size(); start++){
       int end = start;
       printSubarray_utill(nums , start , end);

    }
}
int main()
{
    vector<int> nums{1,2,3,4,5};
    printSubarray(nums);
    return 0;
}