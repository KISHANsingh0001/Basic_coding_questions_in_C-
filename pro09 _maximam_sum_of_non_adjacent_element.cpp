//                                 _maximam_sum_of_non_adjacent_element
#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int solve(vector<int>& arr , int i , int sum , int& maxi){
    // base case 
    if (i>=arr.size())
    {
        maxi = max(maxi , sum);
        return maxi;
    }
    // include 
    solve(arr , i + 2 , sum + arr[i] , maxi);

    // exclude 
    solve(arr , i + 1 , sum  , maxi);
}

int main()
{
    vector<int> arr{2,7,9,3,1,5,6};
    int sum = 0;
    int i = 0;
    int maxi = (-2147483647 - 1);
    cout<<solve(arr , i , sum , maxi);
    
    return 0;
}