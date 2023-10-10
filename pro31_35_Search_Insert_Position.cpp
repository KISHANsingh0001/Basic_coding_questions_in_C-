//                      Leetcode problem number _35_Search_Insert_Position
#include<iostream>
#include<vector>
using namespace std;
int searchInsertposition(vector<int>& arr , int n , int key){
    int low = 0; 
    int high = n - 1;
    while (low<=high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == key) return mid;

        if(arr[mid] < key) low = mid + 1;
        else{
            high = mid - 1;
        }
    }
    return low;
    
}
int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int key;
    cout<<"Enter the key what you want to find : ";
    cin>>key;
    int ans = searchInsertposition(arr , n , key);
    cout<<ans;
    
    return 0;
}
