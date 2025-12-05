#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j,k;
    int a[3][3], b[3][3], c[3][3];

    cout << "Enter the elements of 1st matrix:\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of 2nd matrix:\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "multiplication of two matrices:\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j] =  c[i][j]+a[i][k]*b[k][j];
            }
            cout << c[i][j] << " ";   // ✅ add space
        }
        cout << endl;
    }
    return 0;
}
