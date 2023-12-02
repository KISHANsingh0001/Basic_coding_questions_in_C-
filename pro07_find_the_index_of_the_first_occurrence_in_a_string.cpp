//                      _find_the_index_of_the_first_occurrence_in_a_string
#include <iostream>
#include <string>
using namespace std;
int searchstr(string &str, string &subStr)
{
    int index = str.find(subStr); // this function is used to find the part of string in main string and
                                  //  if we get the part of the main string it returns index where it got the part of string .
    if (index == str.npos)
    {              // if it doesn't find anything, it returns a special constant value
        return -1; //  string::npos (which stands for "no position").
    }
    else
    {
        return index;
    }
}
int main()
{
    string str;
    cout << "Enter the main string: " << endl;
    cin >> str;
    string subStr;
    cout << "Enter the sub string part which you have to find in the main string : " << endl;
    cin >> subStr;
    int ans = searchstr(str, subStr);
    if (ans >= 0)
    {
        cout << " Substring is present at index " << ans << endl;
    }
    else
    {
        cout << " Substring is not present ";
    }

    return 0;
}