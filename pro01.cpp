// Given an integer n , return the difference between the product of its digit and the sum of its digit
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << " Enter the number " << endl;
    cin >> num;
    int digit = 0;
    int sum = 0;
    int product = 1;
    while (num > 0)
    {
        digit = num % 10;
        product = product * digit;
        sum += digit;
        num = num / 10;
    }
    cout << "product of the digit is: " << product << endl;
    cout << "Sum of the digit is: " << sum << endl;

    return 0;
}