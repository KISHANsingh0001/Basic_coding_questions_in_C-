
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long int maxSumWithK(long long int a[], long long int n, long long int k)
    {
        long long int maxsum = 0, currsum = 0;
        for (int i = 0; i < k; i++)
        {
            currsum += a[i];
        }
        maxsum = currsum;
        long long int i = 0;
        long long int j = k;
        long long int prevsum = currsum;
        while (j < n)
        {
            currsum = currsum + a[j] - a[i];
            prevsum = max(prevsum + a[j], currsum);
            maxsum = max(maxsum, prevsum);
            i++;
            j++;
        }
        return maxsum;
    }
};

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}
