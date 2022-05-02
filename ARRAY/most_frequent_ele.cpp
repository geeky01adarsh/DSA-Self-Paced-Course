#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int mostFreq(int l[], int r[], int n){
    vector<int> arr(1000,0);  
    for(int i=0; i<n; i++){
        arr[l[i]] += 1;
        arr[r[i]+1] -=1;
    }
    int maxm=arr[0], res=0;
    for(int i=1; i<1000; i++){
        arr[i]+=arr[i-1];
        if(maxm<arr[i]){
            maxm=arr[i];
            res =i;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int l[n], r[n];
    for(int i=0; i<n; i++) cin>>l[i];
    for(int i=0; i<n; i++) cin>>r[i];
    cout<<mostFreq(l,r,n);
}