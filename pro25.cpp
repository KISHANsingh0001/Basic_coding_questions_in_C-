//       Leetcode problem number - 268. Missing Number
#include<iostream>
#include<algorithm>
using namespace std;
void missingNumber(int arr[] , int n){
     int sum = 0;
     int sum2 = 0;
     for (int i = 0; i < n; i++)
     {
        sum+=arr[i];
       
     }
      cout<<"sum is = "<<sum<<endl;
     for (int j = 0; j <= n; j++)
     {
        sum2+=j;
       
     }
      cout<<"sum2 is = "<<sum2<<endl;
      cout<<"Missing number is "<<sum2 - sum <<endl;
     
}
int main()
{
    int n ;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    missingNumber(arr , n);
    // int ans = missingNumber(arr , n);
    // cout<<"Missing number is: "<<ans;
    
    return 0;
}
