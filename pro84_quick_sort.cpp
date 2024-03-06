#include<iostream>
using namespace std;
int partition(int arr[] , int s , int e ){
    int piviot = arr[s];
    int count = 0;
    for(int i = s+1 ; i<e+1 ; i++){
        if(arr[i] < piviot){
            count++;
        }
    }
    // replace the piviot index into right position
    int piviotIndex = s + count;
    swap(arr[s] , arr[piviotIndex]);
    int i = s;
    int j = e;
    while(i < piviotIndex && j > piviotIndex){
        while (arr[i] < arr[piviotIndex])
        {
            i++;
        }
        while (arr[j] > arr[piviotIndex])
        {
            j--;
        }
        swap(arr[i++] , arr[j--]);
    }
    return piviotIndex;
}
void quickSort(int arr[] , int s , int e ){
    if(s > e){
        return;
    }

    int p = partition(arr , s , e );

    quickSort(arr , s , p-1);

    quickSort(arr , p+1 , e);
}
int main()
{
    int arr[5] = {5,2,3,8,9};
    int n = 5;
    quickSort(arr , 0 , n-1);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}