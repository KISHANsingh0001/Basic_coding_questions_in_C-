#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Custom comparator function
bool customComparator(int a, int b) {
    return a > b; // Change this condition based on the desired wave-like arrangement
}

// Function to convert array to wave-like array
void convertToWave(vector<int>& arr) {

    // Sort the array using custom comparator
    sort(arr.begin(), arr.end(), customComparator);

    //Swap adjacent elements to create the wave-like array
    for ( int i = 0 ; i < arr.size() - 1; i = i + 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    // Example usage
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Call the function to convert the array to a wave-like array
    convertToWave(arr);

    // Print the result
    cout << "Wave-like array: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
