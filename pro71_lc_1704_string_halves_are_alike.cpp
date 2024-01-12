//                               LeetCode-1704. Determine if String Halves Are Alike
#include <iostream>
#include<string>
using namespace std;
bool isVowal(char &ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool halvesAreAlike(string s)
{
    int firstHalfCount = 0;
    int secondHalfCount = 0;

    int mid = (s.length() / 2) - 1;
    for (int i = 0; i <= mid; i++)
    {
        if (isVowal(s[i]))
        {
            firstHalfCount++;
        }
    }
    for (int j = mid + 1; j < s.length(); j++)
    {
        if (isVowal(s[j]))
        {
            secondHalfCount++;
        }
    }
    return firstHalfCount == secondHalfCount;
}
int main()
{
     string s = "textbook";
     if(halvesAreAlike(s)){
        cout<<"String Halves Are Alike"<<endl;
     }
     else{
        cout<<"String Halves Are Not Alike"<<endl;
     }
    return 0;
}