//                                          leet code question number 507. Perfect Number
// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
//  A divisor of an integer x is an integer that can divide x evenly.

// Given an integer n, return true if n is a perfect number, otherwise return false.
#include<iostream>
#include<vector>
using namespace std;
bool checkPerfectNumber(int& num){
        int sum = 0;
        for(int i = 1 ; i<num ; i++){
            if(num % i == 0){
                sum+=i;
            }
        }
        if(sum == num){
            return true;
        }
        else{
            return false;
        }
}
int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    bool ans = checkPerfectNumber(num);
    if(ans){
        cout<<num<<" is the perfect number ."<<endl;
    }
    else{
          cout<<num<<" is not a perfect number ."<<endl;
    }
    return 0;
}