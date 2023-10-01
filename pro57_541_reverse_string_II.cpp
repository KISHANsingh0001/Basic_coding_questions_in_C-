//   leetcode problem number 541. Reverse String II
//   Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the 
//   start of the string. If there are fewer than k characters left, reverse all of them. If there are less than 2k but
//   greater than or equal to k characters, then reverse the first k characters and leave the other as original.
//                                                                                Input: s = "abcdefg", k = 2
//                                                                                Output: "bacdfeg"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void stringReverse(string& s , int k){
    int n = s.length();
    for(int i = 0 ; i<n ; i+= 2*k){
        if(i+k <= n){
            reverse(s.begin() + i , s.begin() + i + k);
        }
        else
        {
            reverse(s.begin()+i , s.end());
        }
        
    }
    
}
int main()
{
    string s = "abcdefg";
    stringReverse(s , 2);
    cout<<s<<endl;
    return 0;
}