//              2125. Number of Laser Beams in a Bank
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
 int numberOfBeams(vector<string>& bank) {
        int total = 0;
        int prevRowCount = 0;
        for(string s : bank){
            // this function counts the 1's in every row ...
            int currRowCount = count(s.begin() , s.end() , '1');

            if(currRowCount == 0){
                continue;
            }
            total += prevRowCount*currRowCount;
            prevRowCount = currRowCount;
        }
        return total;
    }
int main()
{
    vector<string> s = {
        "01110","10101","01010","10111"
    };
   
    cout<<numberOfBeams(s)<<" laser beams are present in the bank "<<endl;
    return 0;
}