#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pre[n], suff[n];
    pre[0] = arr[0];
    suff[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + arr[i];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = suff[i + 1] + arr[i];
    if (pre[n - 1] == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (suff[0] == 0)
    {
        cout << n - 1 << endl;
        return 0;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (pre[i - 1] == suff[i + 1])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
