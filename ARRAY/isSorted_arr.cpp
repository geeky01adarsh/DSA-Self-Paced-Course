#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])
        return 0;
    }
    return 1;
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // cout<<is_sorted(arr, arr+n);
        cout<<isSorted(arr,n)<<endl;
    }
    return 0;
}