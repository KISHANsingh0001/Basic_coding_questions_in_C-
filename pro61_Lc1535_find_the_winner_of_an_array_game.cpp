// Leetcode problem number 1535
// Given an integer array arr of distinct integers and an integer k.

// A game will be played between the first two elements of the array (i.e. arr[0] and arr[1]). In each round of the game,
// we compare arr[0] with arr[1], the larger integer wins and remains at position 0, and the smaller integer moves to the
// end of the array. The game ends when an integer wins k consecutive rounds.
// Return the integer which will win the game.

// It is guaranteed that there will be a winner of the game.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int getWinner(vector<int> &arr, int& k)
{
    int curr = arr[0], win = 0;
    for (int i = 1; i <= arr.size(); i++)
    {
        if (arr[i] > curr)
        {
            curr = arr[i];
            win = 0;
        }
        if (++win == k)
        {
            break;
        }
    }
    return curr;
}
int main()
{
    vector<int> arr{3, 5, 9, 8, 7, 6, 4};
    int k = 2;
    cout<<"The winner is "<< getWinner(arr , k)<<endl;
    return 0;
}