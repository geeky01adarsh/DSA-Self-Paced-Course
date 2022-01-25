#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int jos(int n, int k){
    if(n==1) return 1;
    return (jos(n-1, k)+k)%n;
}

int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        cout<<"The survivour is "<< jos(n,k)<<endl;
    }
    return 0;
}