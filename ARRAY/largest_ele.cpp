#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
            maxi = max(arr[i], maxi);
        cout << maxi << endl;
    }
    return 0;
}