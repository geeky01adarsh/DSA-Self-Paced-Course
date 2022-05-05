#include <iostream>
using namespace std;

int search(int arr[], int n){
    int low=0, high = n;
    while(low<=high){
        int mid = low+(high-low)/2;
        // cout<<mid<<endl; 
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
        if(arr[mid]>arr[mid-1] || mid==0) low = mid+1;
        else high = mid-1;
        // cout<<low<<" "<<high<<endl;
    }
    return -1;
}

int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<search(arr,n)<<endl;
}