#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int digit_sum(int n){
    if(n<10) return n;
    return n%10 + digit_sum(n/10);
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
        cout<<digit_sum(n)<<endl;
    }
    return 0;
}