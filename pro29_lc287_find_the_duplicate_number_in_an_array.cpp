//   _find_the_duplicate_number_in_an_array_leetcode number 287
#include<iostream>
#include<vector>
using namespace std;
    int findDuplicate(vector<int>& nums) {
       
        // sort(nums.begin() , nums.end());
        // for(int i = 0 ; i<nums.size()-1 ; i++){
        //     if(nums[i] == nums[i+1]){
        //         return nums[i];
        //     }
        // }
        // return -1;
        while(nums[0] != nums[nums[0]]){
            swap(nums[0] , nums[nums[0]]);
        }
        return nums[0];
    }
int main()
{
    vector<int>nums{1,3,4,2,2};
    int ans = findDuplicate( nums);
    cout<<"Duplicate number is : "<<ans;
    return 0;
}