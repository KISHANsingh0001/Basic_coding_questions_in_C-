//                    Find the Sunbsequences of the given string 
#include<iostream>
#include<string>
using namespace std;
void printSub(string& str , int n , int i , string output){
    // base case 
    if (i>=n)
    {
        cout<<output<<" ";
        return;
    }
    // exclude case 
    printSub(str , n , i+1 , output);
    // include case 
    output.push_back(str[i]);
    printSub(str , n , i+1 , output);
    
}
int main()
{
    string str = "abc";
    string output = "";
    int i = 0;
    int n = str.length();

    printSub(str , n , i , output);
    return 0;
}