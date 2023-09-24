// Find the peak index of the mountain array 
#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& nums){
    int ans = -1;
    int s = 0;
    int e = nums.size()-1;
    while(s<=e){
        int  mid = s + (e-s)/2;
        if(nums[mid+1]>nums[mid]){
            s = mid + 1;
        }
        else if(nums[mid - 1] > nums[mid]){
            e = mid - 1;
        }
        else{
            ans = mid;
            break;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the size of the vector: " << endl;
    cin >> n;
    vector<int> nums;
    cout<<"Enter the elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    int ans = peakIndexInMountainArray(nums);
    cout<<"Peak index of the array is "<<ans<<endl;
    return 0;
}