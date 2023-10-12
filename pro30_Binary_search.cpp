//                        _Binary_search 
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& arr , int key){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s)/2;
    while (s<e)
    {
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            e = mid -1 ;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    
}
int main()
{
    vector<int> arr{1,2,3,3,4,5,6,7,8,9,9};
    int key = 6;
    int ans = binarySearch(arr , key);
    cout<<"key is present in the "<<ans<<" th index.";
    return 0;
}