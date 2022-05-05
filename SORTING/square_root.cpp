#include <bits/stdc++.h>
using namespace std;

int fsqrt(int n)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int sq = mid * mid;
        if (sq == n)
            return mid;
        if (sq < n)
        {
            int sq2 = (mid + 1) * (mid + 1); 
            if (sq2 > n)
                return mid;
            else
                low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fsqrt(n) << endl;
    }
}