//                                find_out_the _Number_of_1_Bits_of_the_entered_number 
#include<iostream>
using namespace std;
int hammingWeight(uint32_t n){
    int count=0;
    while (n)
    {
        n = n &(n-1);
        count++;
    }
    return count;
    
}
int main()
{
    uint32_t n;
    cout<<"Enter the binary representation of the number: "<<endl;
    cin>>n;
    cout<<"number of 1s bit is " << hammingWeight(n);
    return 0;
}
