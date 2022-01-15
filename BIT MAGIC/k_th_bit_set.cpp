// Check if kth bit is set or not

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    // cin>>t;
    t = 1;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // method 1
        // int x = 1;
        // x = x<<(k-1);
        // if(x&n)
        // cout<<"Set\n";
        // else
        // cout<<"Unset\n";

        // method 2
        n = n>>(k-1);
        if(n%2)
        cout<<"Set\n";
        else
        cout<<"Unset\n";
    }
    return 0;
}