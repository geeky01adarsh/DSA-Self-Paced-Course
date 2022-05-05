#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int n, int k){
    int low=0, high=n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==k) return mid;
        if(arr[mid]>=arr[low]){
            if(arr[low]<=k && arr[high]<k){
            high = mid -1;
            }
            else
                low = mid+1;
        }
        else{
            if(arr[low]<=k && k<=arr[high])
            low=mid+1;
            else high = mid -1;
        } 
    }
    return -1;
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<search(arr, n, k)<<endl;
}