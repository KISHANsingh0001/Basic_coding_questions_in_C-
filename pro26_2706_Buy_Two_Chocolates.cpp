//                        Leetcode question number--> _2706_Buy_Two_Chocolates
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int buyTwochco(vector<int>& prices , int money){
    int ans = 0;
    sort(prices.begin() , prices.end());
    for (int i = 0; i < prices.size(); i++)
    {
        if((prices[0] + prices[1]) <= money ){
           ans = money - (prices[0] + prices[1]);
        }
        else{
            ans = money;
        }
    }
    return ans;
    
}
int main()
{
    vector<int>prices{6,7,8};
    int money = 20;
    int ans = buyTwochco(prices , money);

    cout<<"After buying two choco you have " <<ans<<" money ";
    return 0;
}