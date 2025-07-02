#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5}, {6}};

    for (int i = 0; i < mat.size(); i++) // loop for row
    {
        for (int j = 0; j < mat[i].size(); j++) // loop for column
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}