//WAP to find the maximum element of a matrix.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the number of rows and colomns of a matrix: "<<endl;
    cin>>rows>>cols;
    int matrix[rows][cols];
    cout<<"Enter the elements of the matrx: "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int maxElement=matrix[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]>maxElement)
            {
                maxElement=matrix[i][j];
            }
        }
    }
    cout<<"The maximum element in the matrix is: "<<maxElement<<endl;
    return 0;
}
