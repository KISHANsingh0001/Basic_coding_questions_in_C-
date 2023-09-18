// Wave print of the matrix
#include <iostream>
#include <vector>
using namespace std;
void wavePrintMatrix(vector<vector<int>> &v)
{
    int mCols = v[0].size(); // size of the columns
    int nRows = v.size();    // size of the rows ..
    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            // odd Index --> Bottom to top
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << v[row][col] << " ";
            }
        }
        else
        { // 0 ya even number  ---> top to Bottom
            for (int row = 0; row < nRows; row++)
            {
                cout << v[row][col] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {8, 7, 6, 5},
        {4, 3, 2, 1}};
    int row = v.size();    // this statement shows the size of the row.
    int col = v[0].size(); // this statement shows the size of the column.
    //   cout<<"size of the row is: "<<row<<endl;
    //   cout<<"size of the column is: "<<col<<endl;

    wavePrintMatrix(v);

    return 0;
}