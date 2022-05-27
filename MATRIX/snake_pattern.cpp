#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    int i = 0;
    while (i < n)
    {
        if ((i % 2) == 1)
        {
            for (int j = m - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
            // cout<<endl;
        }
        else
        {
            for (int j = 0; j < m; j++)
                cout << arr[i][j] << " ";
            // cout<<endl;
        }
        i++;
    }
}