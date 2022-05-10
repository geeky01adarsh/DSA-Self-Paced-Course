#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int min_choco(int arr[], int n, int m){
    if(m>n) return -1;
    sort(arr,arr+n);
    int res = arr[m-1]-arr[0];
    for(int i=1; i+m-1<n; i++) 
    res= min(res,arr[m+i-1]-arr[i]);
    return res;
}

int main(){
     int n,m;
     cin>>n>>m;
     int arr[n];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     cout<<min_choco(arr,n,m);
}