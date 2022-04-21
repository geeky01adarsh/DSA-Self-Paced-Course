#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void twoOddOccuring(int n, int arr[])
{
    int x = arr[0];
    for(int i=0; i<n; i++){
        x = x ^ arr[i];
    }
    int lsb = log2(x&-x)+1;
    int y = 1<<lsb;
    cout<<y<<endl;
    vector<int> set, unset;
    for(int i=0; i<n; i++){
        if(y & arr[i]) set.push_back(arr[i]);
        else unset.push_back(arr[i]);
    }
    // for(auto i:set) cout<< i <<" ";
    // cout<<endl;
    // for(auto i:unset) cout<< i <<" ";
    // cout<<endl;
    int j = 0, k = 0;
    for(auto i:set) j=j^i;
    for(auto i:unset) k = k^i;
    cout<<j<<"  "<<k<<endl;
    return;
}




int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    twoOddOccuring(n, arr);
    return 0;
}
