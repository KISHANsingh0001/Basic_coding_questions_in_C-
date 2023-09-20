// Leetcode problem number 231. Power of Two..
#include<iostream>
using namespace std;
bool powerOf2(long long int& n){
    long long int bits = n & (n-1);
     if(bits != 0 || n==0)
     return 0;

     return 1;

}
int main()
{
    long long int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    bool ans = powerOf2(n);
    if(ans == 1)
    cout<<n<<" is a power of 2 ";
    else{
        cout<<n<<" is not a power of 2 ";
    }
    return 0;
}