//     leet code question number 796_Rotate_String
// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

// A shift on s consists of moving the leftmost character of s to the rightmost position.

// For example, if s = "abcde", then it will be "bcdea" after one shift.                      Input: s = "abcde", goal = "cdeab"
//                                                                                            Output: true
#include<iostream>
#include<string>
using namespace std;
bool rotateString(string s, string goal){
    string ans = s + s;
    if(ans.find(goal) == string::npos){
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    string s , goal;
    cout<<"Enter the string s : "<<endl;
    cin>>s;
    cout<<"Enter the string goal: "<<endl;
    cin>>goal;
    if(rotateString(s , goal)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }     
    return 0;
}