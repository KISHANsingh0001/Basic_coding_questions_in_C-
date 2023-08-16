#include <iostream>
#include <algorithm>
using namespace std;

void sort(int arr[], int n) {
    int leftptr = 0;
    int rightptr = n - 1;

    while (leftptr < rightptr) {
        if (arr[leftptr] == 1 && arr[rightptr] == 0) {
            swap(arr[leftptr], arr[rightptr]);
            leftptr++;
            rightptr--;
        } else {
            if (arr[leftptr] == 0) {
                leftptr++;
            }
            if (arr[rightptr] == 1) {
                rightptr--;
            }
        }
    }
}

int main() {
    int arr[8] = {0, 1, 0, 1, 0, 0, 1, 0};
    cout << "Before sorting: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, 8);
    cout << "\nAfter sorting: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
