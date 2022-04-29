#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int sec_max(int n, int arr[]){
    int maxi=arr[0], sec_maxi=-1;
    for(int i=1; i<n; i++){
            // cout<<arr[i]<<" ";
        if(arr[i]>=maxi){
            sec_maxi=maxi;
            maxi = arr[i];
        }
        else if(arr[i]>sec_maxi){
            sec_maxi=arr[i];
        }
    }
    return sec_maxi;
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
        int maxi = INT_MIN;
        cout<<sec_max(n,arr)<<endl;

        for (int i = 0; i < n; i++)
            maxi = max(arr[i], maxi);
        for (int i = 0; i < n; i++){
            if(arr[i]== maxi){
                arr[i]=INT_MIN;
                maxi = INT_MIN;
                break;
            }
        } 
        for (int i = 0; i < n; i++)
            maxi = max(arr[i], maxi);  
        cout<<maxi<<endl;
    }

    return 0;
}