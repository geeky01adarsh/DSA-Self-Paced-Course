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
        int low = 0, mid, high;
        cin >> mid >> high;
        int arr[high + 1];
        vector<int> ans;
        int j = mid + 1;
        for (int i = 0; i < high + 1; i++)
            cin >> arr[i];
        while (low <= mid && j <= high)
        {
            if (arr[low] < arr[j])
                ans.push_back(arr[low++]);
            else
                ans.push_back(arr[j++]);
        }
        while (low <= mid)
            ans.push_back(arr[low++]);
        while (j <= high)
            ans.push_back(arr[j++]);
        for (int i=0; i<high+1; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}