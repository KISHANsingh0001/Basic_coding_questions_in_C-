//                                                  Move all negative number of left side in an array 
#include <iostream>
#include <algorithm>
using namespace std;
void move(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
            
        }
    }
}
    int main()
    {
        int n;
        cout << "Enter the size of the array: " << endl;
        cin >> n;

        int arr[n];
        cout << "Enter the positive and negative number:" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        move(arr, n);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        return 0;
    }