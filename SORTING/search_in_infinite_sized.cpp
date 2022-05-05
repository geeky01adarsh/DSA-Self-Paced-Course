#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int k){
    int i=1;
    if(arr[0]==k) return 0;
    while(arr[i]<k) i*=2;
    // cout<<i<<endl;
    int low = i/2, high =++i;
    while(low<=high){
        int mid = low+(high-low)/2;
        // cout<<mid<<" ";
        if(arr[mid]==k) return mid;
        else if(arr[mid]<k){
            if(arr[mid+1]>k) return mid+1;
            low = mid+1;
        } 
        else high = mid-1;
    }
    return 0;
}

int main(){
    int n, k;
    cin>>n>>k; 
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<search(arr, k)<<endl;
}