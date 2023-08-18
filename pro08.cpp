//                                       Remove the elements 
// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
// The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
#include<iostream>
#include<vector>
using namespace std;
int removeEle(vector<int>& nums, int val){
    int index = 0;
    for (int  i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
        
    }
    return index;
    
}
int main()
{
    int n , val;
    cout<<" Enter the size of the vector "<<endl;
    cin>>n;
    int e;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin>>e;
        nums.push_back(e);
    }
   
    cout<<"Enter the value of val which has to remove from the vector ";
    cin>>val;
    cout<< removeEle(nums , val)<< " number present in the nums vector which is not equal to the val ";
    return 0;
}