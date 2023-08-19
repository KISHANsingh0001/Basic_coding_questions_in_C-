//                  Contains Duplicate [Leetcode question number 215]
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool solve(vector<int>& v){
    sort(v.begin() , v.end());
    int i = 0;
    int j = 1;
    while (i<v.size() && j<v.size())
    {
          if(v[i] == v[j]){
            return true;
          }
          else
          {
            i++;
            j++;
          }
          
    }
    return false;

    
}
int main()
{
    int n;
    cout<<"Enter the size of the vector : "<<endl;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    bool ans;
    ans = solve(v);
    if(ans){
        cout<<" Duplicate is available ";
    }
    else{
        cout<<" Duplicate is not available ";
    }
    
    return 0;
} 