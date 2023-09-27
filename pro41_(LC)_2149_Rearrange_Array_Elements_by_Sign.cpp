// leetcode question number  (LC)_2149_Rearrange_Array_Elements_by_Sign....

#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int positive_index = 0;
    int negative_index = 1;
    int i = 0;
    while (i < nums.size())
    {
        if (nums[i] > 0)
        {
            ans[positive_index] = nums[i];
            positive_index += 2;
            i++;
        }
        else
        {
            ans[negative_index] = nums[i];
            negative_index += 2;
            i++;
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
    vector<int> ans;
    cout<<"Enter the elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    ans = rearrangeArray(nums);
    cout<<"Rearranged vector is : "<<endl;
    for(int i = 0 ; i< ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}