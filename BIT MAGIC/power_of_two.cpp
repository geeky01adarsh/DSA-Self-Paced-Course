// check if the given no is a power of 2
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
        cin>>n;
        
        // // method 1
        // bool flag =0;
        // while(n){
        //     if(n&1 && n>1){
        //         flag=0; break;
        //     }
        //     else if(n&1) flag=1;
        //     n = n>>1;
        // }
        // if(flag) cout<<"Yes\n";
        // else cout<<"No\n";

        // method 2
        int x = (log2(n&-n)+1);
        if(n==(1<<(x-1))) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}