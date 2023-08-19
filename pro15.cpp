        // check palindrome using recursion 
#include<iostream>
#include<string>
using namespace std;
bool solve(string& s , int start , int e ){
      // base case 
   if(start>=e)
   return true;

   if(s[start] != s[e]){
    return false;
   }
   return solve(s , start+1, e-1);
}
int main()
{
    string s;
    cin>>s;
     bool ans;
     ans = solve(s , 0 , s.size()-1);
    if(ans){
        cout<<"your string is palindrome";
    }
    else{
        cout<<"your string is not palindrome";
    }
    return 0;
}