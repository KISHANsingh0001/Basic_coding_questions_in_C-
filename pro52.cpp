// Find out the missing number in an array 
#include<iostream>
#include<vector>
using namespace std;
int findMissingNumber(vector<int>& ans){
    int finalAns = 0;
    for (int i = 0; i <= ans.size(); i++)
    {
        finalAns = finalAns^i;
    }
     for (int i = 0; i < ans.size(); i++)
    {
        finalAns = finalAns^ans[i];
    }
    return finalAns;
    
}
int main()
{
   int n;
   cin>>n;
   vector<int>ans;
   for (int i = 0; i < n; i++)
   {
    int ele;
    cin>>ele;
    ans.push_back(ele);
   }
   int finalAns = findMissingNumber(ans);
   cout<<"Missing number is: "<<finalAns<<endl;
    return 0;
}