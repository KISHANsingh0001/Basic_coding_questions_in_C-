//         Geeks for geeks problem  boolean_Matrix
// Given a boolean matrix of size RxC where each cell contains either 0 or 1,
// modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.
//                                                                 Input: R = 2, C = 2
//                                                                        matrix[][] = {{1, 0},
//                                                                                      {0, 0}}
//                                                                     Output: 1 1
//                                                                             1 0
//                                                                          
#include<iostream>
#include<vector>
using namespace std;
 void booleanMatrix(vector<vector<int>>& matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>>v = matrix;

    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            if(matrix[i][j] == 1){
                for(int k = 0 ; k<row ; k++){
                    v[k][j] = 1;
                }
                for(int k = 0 ; k<col; k++){
                    v[i][k] = 1;
                }
            }
        }
    }
    matrix = v;
 }

int main()
{
    vector<vector<int>> matrix = {{ 1, 0, 0},
                                  { 1, 0, 0},
                                  { 1, 0, 0},
                                  { 0, 0, 0}};
    booleanMatrix(matrix);
    for(int i = 0 ; i<matrix.size() ; i++){
        for(int j = 0 ; j<matrix[0].size() ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



