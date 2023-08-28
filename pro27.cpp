//                 leet code question number 75. Sort Colors 
#include<iostream>
#include<algorithm>
using namespace std;

void sort012(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter the colors (0, 1, or 2):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort012(arr, n);
    
    cout << "Sorted colors: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}