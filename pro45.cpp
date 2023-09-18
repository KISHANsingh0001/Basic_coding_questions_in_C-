//         Remove duplicate element from the array using vectors STL.........
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    int arr[] = {1,1,2};
    n = sizeof(arr) / sizeof(int);
    // cout<<"size of the array is: "<<n;
    

    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }

    v.erase(unique(v.begin(), v.end()), v.end());
    cout<<"size of the vector is: "<<v.size()<<endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}