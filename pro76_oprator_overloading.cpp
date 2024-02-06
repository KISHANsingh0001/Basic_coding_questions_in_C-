// Using friend function write a programe to overload == operator to compare two strings of class string.
#include <iostream>
#include <string>
using namespace std;
class Str
{
public:
    int length;
    string st;
    Str(int len, string st) : length(len), st(st) {}
    friend bool operator==(const Str &st2, const Str &st1);
};

bool operator==(const Str &st2, const Str &st1)
{
    int len1 = st1.length;
    int len2 = st2.length;
    if (len1 == len2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Str s1(6, "kishan");
    Str s2(6, "sagerr");
    if (s1 == s2)
    {
        cout << "string is equal" << endl;
    }
    else
    {
        cout << "String is not equal" << endl;
    }
    return 0;
}


