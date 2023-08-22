//                     Add Sum problem    input -->  38   3 + 8 = 11             leetcode problem
//                                        output --> 2    1 + 1 = 2
#include <iostream>
using namespace std;
int addSum(int &num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num % 9 == 0)
    {
        return 9;
    }
    else
    {
        return num % 9;
    }
}
int main()
{
    int num;
    cout << " Enter the number: " << endl;
    cin >> num;
    int ans = addSum(num);
    cout << "Your ans is:" << ans;
    return 0;
}