//       Best time to buy ans sell stocks problem  [Leetcode problem number 121] by recursion and iteratively both
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void buysellStocksgenrator(vector<int> &prices, int i, int &miniprice, int &maxprofit)
{
    // base case
    if (i == prices.size())
    {
        return;
    }

    if (prices[i] < miniprice)
    {
        miniprice = prices[i];
    }
    if ((prices[i] - miniprice) > maxprofit)
    {
        maxprofit = (prices[i] - miniprice);
    }
    buysellStocksgenrator(prices, i + 1, miniprice, maxprofit);
}
int main()
{
    vector<int> prices{1, 2, 3, 4};
    int miniprice = INT_MAX;
    int maxprofit = INT_MIN;
    buysellStocksgenrator(prices, 0, miniprice, maxprofit);
    //  int miniprice = INT_MAX;
    //     int maxprofit = INT_MIN;
    //     for(int i = 0; i<prices.size() ; i++){
    //         if(prices[i] < miniprice){
    //             miniprice = prices[i];
    //         }
    //         if((prices[i]-miniprice)> maxprofit){
    //             maxprofit = prices[i] - miniprice;
    //         }
    //     }
    cout << " Max profit we gained is : " << maxprofit;
    return 0;
}