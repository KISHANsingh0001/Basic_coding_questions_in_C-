//                      Isomorphic strings     Leetcode question number 205
#include<iostream>
#include<string>
using namespace std;
bool isIsomorphic(string& s, string& t) {
       if (s.size() != t.size())
       {
        return false;
       }
       
       int hash[256] = {0}; 
       bool isTcharsMapped[256] = {0}; 

       for(int i = 0 ; i<s.size() ; i++){
           if(hash[s[i]] == 0 && isTcharsMapped[t[i]] == 0){
               hash[s[i]] = t[i];
               isTcharsMapped[t[i]]= true;
           } 
       }

       for(int i = 0 ; i< s.size(); i++){
           if(char(hash[s[i]]) != t[i]){
                 return false;
           }
       }
       return true;
    }
int main()
{
    string s;
    cout<<"Enter the s string:";
    cin>>s;
    cout<<endl;
    string t;
    cout<<"Enter the t string:";
    cin>>t;
    bool ans = isIsomorphic( s , t);
    if (ans)
    {
        cout<<" Your string is isomorphic. ";
    }
    else{
        cout<<"Your string is not isomorphic.";
    }
    
    
    return 0;
}