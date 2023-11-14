//          [medium]     _K_divisible_elements_subarray (Leetcode problem number . 2261)
#include<iostream>
#include<vector>
#include<set>
using namespace std;
int solve(vector<int>& nums , int& k , int& p){
    set<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        vector<int>sub;
        int count = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sub.push_back(nums[j]);
            if(nums[j] % p == 0){
                count++;
            }
            if(count>k){
                break;
            }
            ans.insert(sub);
        }
        
    }
    return ans.size();
    
}
int main()
{
    vector<int> nums{1,2,3,4};


}
}
    int k = 4;
    int p = 1;
   int ans =  solve(nums , k , p);
   cout<<ans;
    return 0;
}