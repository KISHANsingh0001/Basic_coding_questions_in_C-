//          _rotate_the_array_with_kth_position 
#include<iostream>
#include<vector>
using namespace std;
void rotateVector(vector<int>& temp , int k){
         vector<int>nums;
         for (int i = 0; i < temp.size(); i++)
         {
            nums[(i+k) % temp.size()] = temp[i];
         }
         temp = nums;
         
}
int main()
{
    int n;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    int k;
    cout<<"Enter the rotate point: ";
    cin>>k;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        temp.push_back(ele);
    }
     for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    rotateVector(temp , k);

    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    
    return 0;
}