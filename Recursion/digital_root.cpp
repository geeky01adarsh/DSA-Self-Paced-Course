#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int digit_root(int n)
{
    if (n < 10)
        return n;
    int sum = n % 10 + digit_root(n / 10);
    if (sum > 9)
        sum = digit_root(sum);
    return sum;
}

int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int n;
        cin >> n;
        cout << digit_root(n) << endl;
    }
    return 0;
}