//                             _Intersection_of_Two_Arrays
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void intersectionArray(vector<int>& nums1 , vector<int>& nums2 , vector<int>& ans){
    int i = 0; // pointing the nums1 
    int j = 0; // pointing the nums2
    sort(nums1.begin() , nums1.end());
    sort(nums2.begin() , nums2.end());
    while (i<nums1.size() && j < nums2.size())
    {
        if (i>0 && nums1[i] == nums1[i-1])
        {
            i++;
            continue;
        }
        if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i] < nums2[j]){
            i++;
        }
        else{
            j++;
        }
        
        
    }
    
}  
int main()
{
    vector<int> nums1{4, 9, 5};
    vector<int> nums2 { 9, 4, 9, 8, 4 };
    vector<int> ans;
    intersectionArray(nums1 , nums2 , ans); 
   for (int i = 0; i < ans.size(); i++)
   {
    cout<< ans[i]<<" ";
   }
   

    return 0;
}