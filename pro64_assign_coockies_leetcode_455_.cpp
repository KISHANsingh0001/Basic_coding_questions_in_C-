//                    LeetCode-455. Assign Cookies
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin() , s.end());
        sort(g.begin() , g.end());
        int i = 0;
        int j = 0;
        while(j < s.size() && i < g.size()){
            if(s[j] >= g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
int main()
{
    vector<int> g = {1,2,3};
    vector<int> s = {1,1};
    int ans = findContentChildren(g , s);
    cout<<ans<<endl;
    return 0;
}