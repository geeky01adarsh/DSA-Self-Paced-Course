#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void removeDuplicates(int arr[], int n){
    cout<<arr[0]<<" ";
    for(int i = 1; i<n; i++){
        if(arr[i]!=arr[i-1])
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
        removeDuplicates(arr,n);
    }
    return 0;
}