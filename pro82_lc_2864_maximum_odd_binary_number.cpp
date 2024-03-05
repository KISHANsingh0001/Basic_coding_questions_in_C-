//                           LeetCode NO:- 2864. Maximum Odd Binary Number
// You are given a binary string s that contains at least one '1'.

// You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

// Return a string representing the maximum odd binary number that can be created from the given combination.

// Note that the resulting string can have leading zeros.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string maximumOddBinaryNumber(string &s)
{
    int count0 = 0; // maintain the count of zero's
    int count1 = 0; // maintain the count of one's
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    s.clear(); // erassing whole string of given parameter
    while (count1 > 1)
    {
        s.push_back('1');
        count1--;
    }
    while (count0--)
    {
        s.push_back('0');
    }
    while (count1--)
    {
        s.push_back('1');
    }
    return s;
}
int main()
{
    string s;
    cout<<"Enter the charactor only '0' and '1' "<<endl;
    cin>>s;
    string ans = maximumOddBinaryNumber(s);
    cout<<ans;
    return 0;
}
