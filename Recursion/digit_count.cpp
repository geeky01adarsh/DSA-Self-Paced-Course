#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int digit_count(int n){
    if(n<10) return 1;
    return 1 + digit_count(n/10);
}

int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<digit_count(n)<<endl;
    }
    return 0;
}