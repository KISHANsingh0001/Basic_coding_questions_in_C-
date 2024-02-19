//                   LeetCode problem no. 1299. Replace Elements with Greatest Element on Right Side
// Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

// // After doing so, return the array.
// Input: arr = [17,18,5,4,6,1]
// Output: [18,6,6,6,1,-1]
// Explanation: 
// - index 0 --> the greatest element to the right of index 0 is index 1 (18).
// - index 1 --> the greatest element to the right of index 1 is index 4 (6).
// - index 2 --> the greatest element to the right of index 2 is index 4 (6).
// - index 3 --> the greatest element to the right of index 3 is index 4 (6).
// - index 4 --> the greatest element to the right of index 4 is index 5 (1).
// - index 5 --> there are no elements to the right of index 5, so we put -1.
#include <iostream>
#include <vector>
using namespace std;
vector<int> replaceElements(vector<int> &arr)
{
    int n = arr.size();
    int temp;
    int maxi = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        temp = arr[i];
        arr[i] = maxi;
        maxi = max(maxi, temp);
    }
    return arr;
}
int main()
{
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    vector<int> ans = replaceElements(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
