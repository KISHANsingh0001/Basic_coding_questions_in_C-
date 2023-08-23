//                                  Valid anagram leetcode question number 242
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
bool findAnagram(string &s , string& t)
{
    int freQuenci[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freQuenci[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        freQuenci[t[i]]--;
    }
    for (int j = 0; j < 256; j++)
    {
        if (freQuenci[j] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cout<<"Enter the first string:"<<endl;
    cin>>s;
    string t ;
    cout<<"Enter the second string:"<<endl;
    cin>>t;
    bool ans = findAnagram(s , t);
    if (ans)
    {
        cout<<"your string is anagram.. ";
    }
    else
    {
        cout<<"your string is not an anagram.. ";
    }
    
    
    return 0;
}