//                                       Game with String (GFG)
// Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of k characters. The value of a string is defined as the sum of squares of the count of each distinct character present in the string.
// Input: 
// s = abccc, k = 1
// Output: 
// 6
// Explaination:
// We remove c to get the value as 1^2 + 1^2 + 2^2
#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
int minValue(string &s, int k)
{
    if (k >= s.size())
        return 0;
    unordered_map<char, int> mp;
    // 1 all charactors ke frequncy count nikalo
    for (auto it : s)
    {
        mp[it]++;
    }
    // 2 frequency count ka max heap bana lo
    priority_queue<int> q;
    for (auto i : mp)
    {
        q.push(i.second);
    }
    // 3 high frequency nikalo and loop main k-- karo and jo count nikala the usko bhi decreiment karo
    //   by one then agian max Heap main store kar lo
    while (k--)
    {
        int count = q.top();
        q.pop();
        q.push(count - 1);
    }
    // 4 last main jab tak q empty nahi hota tab tak (count*count) ko sum kar lo
    int sum = 0;
    while (q.size())
    {
        int count = q.top();
        q.pop();
        sum += (count * count);
    }
    return sum;
}
int main()
{
     string s = "aabcbcbcabcc";
     int k = 3;
     int ans = minValue(s,k);
     cout<<"the sum of squares of the count of each distinct character present in the string is :"<<ans<<endl;
    return 0;
}