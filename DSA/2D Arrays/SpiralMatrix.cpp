#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m)
{
    int srow = 0, erow = n - 1;
    int scol = 0, ecol = m - 1;

    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int i = scol; i <= ecol; i++)
        {
            cout << mat[srow][i] << " ";
        }
        srow++;

        // right
        for (int i = srow; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }
        ecol--;

        // bottom
        for (int i = ecol; i >= scol; i--)
        {
            if(srow == erow){
                break;
            }
            cout << mat[erow][i] << " ";
        }
        erow--;

        // left
        for (int i = erow; i >= srow; i--)
        {
            if(scol == ecol){
                break;
            }
            cout << mat[i][scol] << " ";
        }
        scol++;
    }
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    spiralMatrix(mat, 4, 4);
    return 0;
}