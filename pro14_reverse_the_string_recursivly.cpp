//   Revese a string Recursivly 
#include<iostream>
#include<string>
using namespace std;
void solve(string& s , int start , int end){
    // base case 
    if (start >= end)
    {
        return;
    }
    swap(s[start++] , s[end--]);
    solve(s , start , end); 
    
}
int main()
{
    string s = "abcd";
    cout<<"Enter the string: ";
    cin>>s;
    
    solve(s , 0 , s.size()-1);
    cout<<s<<" ";
    return 0;
}