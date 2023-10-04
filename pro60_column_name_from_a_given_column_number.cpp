//                               GFG problem column_name_from_a_given_column_number
//                                                                                               Input:
//                                                                                               N = 28
//                                                                                               Output: AB
//                                                                                               Explanation: 1 to 26 are A to Z.
//                                                                                               Then, 27 is AA and 28 = AB.
#include<iostream>
#include<string>
using namespace std;
string colName (long long int& n){
string ans;
while (n>0)
{
    n--;
    char c = 'A'+n%26;
    ans = c + ans;
    n/=26;
}

return ans;

}
int main()
{
    long long int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    string ans = colName(n);
    cout<<ans<<endl;
    return 0;
}