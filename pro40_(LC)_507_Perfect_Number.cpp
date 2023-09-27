// Leet code problem number (LC)_507_Perfect_Number
// A perfect number is a positive integer that is equal to the sum of its positive divisors,
//  excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

// Given an integer n, return true if n is a perfect number, otherwise return false.
#include<iostream>
#include<math.h> 
using namespace std;
int isPerfectNumber(int n){
    long long sum = 1;
    for(long long int i = 2 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            sum+=i;
            sum+=n/i;
        }
    }
    if(sum == n){
        return true;
    }
    else{ 
    return false;
    }
}

int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    if(isPerfectNumber(n)){
        cout<<"Your number is perfect number.";
    }
    else{
        cout<<"Your Entered number is not a perfect number.";
    }
    return 0;
}