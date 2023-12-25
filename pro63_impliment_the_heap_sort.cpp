#include <iostream>
using namespace std;
void hepify(int arr[], int n, int index)
{
    int largestIndex = index;
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;
    if (leftIndex <= n && arr[leftIndex] > arr[largestIndex])
    {
        largestIndex = leftIndex;
    }
    if (rightIndex <= n && arr[rightIndex] > arr[largestIndex])
    {
        largestIndex = rightIndex;
    }
    if (index != largestIndex)
    {
        swap(arr[index], arr[largestIndex]);
        index = largestIndex;
        hepify(arr, n, index);
    }
}
void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i > 0; i--)
    {
        hepify(arr, n, i);
    }
}
int main()
{
    int arr[] = {-1, 12, 10, 22, 18, 15, 1, 3, 4, 6, 7};
    int size = 10;
    int n = 10;
    buildHeap(arr, n);
    cout << "Printing the heap (before heap sort) " << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    while (n != 1)
    {
        swap(arr[1], arr[n]);
        n--;
        hepify(arr, n, 1);
    }
    cout << "printing the heap (after heap sort) " << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}