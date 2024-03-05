//                                 1750. Minimum Length of String After Deleting Similar Ends
// Given a string s consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:

// 1) Pick a non-empty prefix from the string s where all the characters in the prefix are equal.
// 2) Pick a non-empty suffix from the string s where all the characters in this suffix are equal.
// 3) The prefix and the suffix should not intersect at any index.
// 4) The characters from the prefix and suffix must be the same.
// 5) Delete both the prefix and the suffix.
// Return the minimum length of s after performing the above operation any number of times (possibly zero times).

// Input: s = "aabccabba"
// Output: 3
// Explanation: An optimal sequence of operations is:
// - Take prefix = "aa" and suffix = "a" and remove them, s = "bccabb".
// - Take prefix = "b" and suffix = "bb" and remove them, s = "cca".
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int minimumLength(string& s)
{
    int i = 0;
    int j = s.length() - 1;
    while (i < j && s[i] == s[j])
    {
        char currChar = s[i];
        while (i < s.length() && s[i] == currChar)
        {
            i++;
        }
        while (j >= 0 && s[j] == currChar)
        {
            j--;
        }
    }
    if (i > j)
    {
        return 0;
    }
    else
    {
        return j - i + 1;
    }
}
int main()
{
    string s = "aabccabba";
    int ans = minimumLength(s);
    cout<<"minimum length of s after performing operation : "<<ans<<endl;

    return 0;
}