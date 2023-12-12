//               _Revers_The_array 
#include<iostream>
#include<algorithm>
using namespace std;
void revers(int arr[] , int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(arr[s++] , arr[e--]);
    }
    
}
int main()
{
    int n;
    cout<<" Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array elements : "<<endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    revers(arr , n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}