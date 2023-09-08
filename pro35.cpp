// find out the pivot element in ans sorted and rotated array 
#include<iostream>
using namespace std;
int pivot(int arr[] , int n){
    int s=0;
    int e = n - 1;
    while (s<=e)
    {
        int mid = s + (e -s)/2;
        if(arr[mid]>= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return s;
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the element in sorted and rotated format : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int ans = pivot(arr , n);
    cout<<"pivot index is : "<<ans;
    return 0;
}