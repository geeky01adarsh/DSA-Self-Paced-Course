// Macurine's Voting Algorithm
#include <bits/stdc++.h>
using namespace std;

int majorityEle(int arr[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count++;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
        if (arr[res] == arr[i])
            count++;
    return count > n / 2 ? arr[res] : -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << majorityEle(arr, n) << endl;
    return 0;
}
