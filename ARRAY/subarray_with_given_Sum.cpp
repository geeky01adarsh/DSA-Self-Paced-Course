#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == x)
        {
            cout << k << " " << i << endl;
            return 0;
        }
        while (sum > x)
        {
            sum -= arr[k++];
        }
    }
    if (sum == x)
    {
        cout << k << " " << n - 1 << endl;
        return 0;
    }
    cout << -1 << endl;
}