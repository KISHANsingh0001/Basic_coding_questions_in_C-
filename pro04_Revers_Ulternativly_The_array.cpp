//               _Revers_Ulternativly_The_array    input = {1,2,3,4,5,6 }
//                                                output = {2, 1, 4, 3, 6, 5 }
#include <iostream>
#include <algorithm>
using namespace std;
void reversUlternative(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int n;
    cout << " Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements : " << endl;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reversUlternative(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}