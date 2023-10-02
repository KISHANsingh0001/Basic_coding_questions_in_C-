#include <iostream>
#include<vector>
using namespace std;
vector<int> boundaryTraversal(vector<vector<int>> matrix, int row, int col)
{
    vector<int> ans;
    // first row print karega ye loop
    for (int i = 0; i < row; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < col; j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
    }
    // last column print karega ye loop
    for (int i = 0; i < col; i++)
    {
        if (i == col - 1)
        {
            for (int j = 1; j < row; j++)
            {
                ans.push_back(matrix[j][i]);
            }
        }
    }
    // last row print karega ye loop
    for (int i = 0; i < row; i++)
    {
        if (i == row - 1)
        {
            for (int j = col - 2; j >= 0; j--)
            {
                ans.push_back(matrix[i][j]);
            }
        }
    }
    // first column print karega ye loop
    for (int i = 0; i < col; i++)
    {
        if (i == 0)
        {
            for (int j = row - 2; j > 0; j--)
            {
                ans.push_back(matrix[j][i]);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {
        {12,11,10,9},
        {8,7,6,5},
        {4,3,2,1}};
        vector<int>ans = boundaryTraversal(matrix , matrix.size() , matrix[0].size());
        for(auto i : ans){
            cout<<i<<" ";
        }
    return 0;
}