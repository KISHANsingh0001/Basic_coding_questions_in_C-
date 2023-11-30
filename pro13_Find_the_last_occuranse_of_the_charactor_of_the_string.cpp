//              _Find_the_last_occuranse_of_the_charactor_of_the_string  using recursion 
#include<iostream>
#include<string>
using namespace std;
int solve(string& s , int x , int i , int& ans){
    // base case 
    if (i>s.size())
    {
        return ans;
    }
    if (s[i] == x)
    {
        ans = i;
    }
    solve(s , x , i + 1 , ans);
    
    
}
int main()
{
    string s;
    cout<<" Enter the string : "<<endl;
    cin>>s;
    char x ;
    cout<<" Enter the charactor you want to find out the last occuranse in this string: ";
    cin>>x;
    int ans = -1;
     ans = solve(s , x , 0 , ans);
    cout<<" last occuranse of the "<< x <<" is "<< ans <<" th index";
    return 0;
}