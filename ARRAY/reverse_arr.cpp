#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void reverseArr(int arr[], int n){
    int j = n-1;
    for(int i=0; i<n/2; i++)
        swap(arr[i], arr[j--]);
    for(int i =0; i<n; i++)
    cout<<arr[i]<<" ";
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

        reverseArr(arr, n);
    }
    return 0;
}