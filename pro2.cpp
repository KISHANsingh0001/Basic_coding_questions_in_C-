//                                          Revers the number (Intiger)
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << " Enter the number " << endl;
    cin >> num;
    cout<<" Enterd number is :"<< num << endl;
    int answer = 0;
    int digit = 0;
    while (num!=0)
    {
        digit = num % 10;
        answer = (answer*10) + digit;
        num = num / 10;
    }
    cout<<"Reversed number is : "<< answer <<endl;
    
    return 0;
}