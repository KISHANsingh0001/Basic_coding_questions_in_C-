// Rotate array with k times 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& nums , int k){
    k = k % nums.size();
    //1.reverse [0 , n-1]
    reverse(nums.begin() , nums.end());

    //2. reverse [0 , k-1]
    reverse(nums.begin() , nums.begin() + k);

    //3. reverse [k , n-1]
    reverse(nums.begin()+k , nums.end());
}
int main()
{
    int n , k;
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
    cout<<"Enter how many times rotate the array: "<<endl;
    cin>>k;
    rotate(nums , k);
    for(int i = 0 ; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}