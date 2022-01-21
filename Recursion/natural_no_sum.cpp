#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;\

int natural_no_sum(int n){
    if(n==1) return 1;
    return n+natural_no_sum(n-1);
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
        cout<<natural_no_sum(n)<<endl;
    }
    return 0;
}