//                                     Leetcode problem number 796. Rotate String
#include<iostream>
#include<string>
using namespace std;
bool rotateString(string s , string goal){
    if(s.size() != goal.size()){
        return false;
    }
    string ans = s + s;
    if(ans.find(goal) != string::npos){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s , goal ;
    cout<<"Enter the main string : "<<endl;
    cin>>s;
    cout<<"Enter the goal string which you want to find in main string : "<<endl;
    cin>>goal;
    bool ans = rotateString(s , goal);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
