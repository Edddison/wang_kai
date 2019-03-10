#include <iomanip>
#include "Matrix.h"
using namespace std;

vector<vector<double>>operator+(vector<vector<double>> arrA, vector<vector<double>> arrB)
{


    int rowA=arrA.size();
    int colA=arrA[0].size();
    int rowB=arrB.size();
    int colB=arrB[0].size();

    if(rowA!=rowB||colA!=colB)
    {
        return resize;
    }

    else
    {
        res.resizer(rowA);
        for(int i=0;i<rowA;i++)
        {
            res[i].resize(colB);
        }

        for(int i=0;i<rowA;i++)
        {
            for(int j=0;j<colB;j++)
            {
                res[i][j]=a[i][j]+b[i][j];
            }
        }
    }
}

Matrix::Matrix(int a,int b)
{
    double e[a][b];
    for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cin>>e[i][j];
            }
        }

   for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                cout<<e[i][j]<<" ";
            }

            cout<<endl;
        }


}
