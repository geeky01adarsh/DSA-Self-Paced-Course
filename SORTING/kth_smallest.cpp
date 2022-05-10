// This algorithm is also known as Quickselect

#include <iostream>

using namespace std;

int lomuto_partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i=l-1;
    for(int j=l; j<=h; j++){
        if(arr[j]<pivot) swap(arr[j],arr[++i]);
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

int kth_smallest(int arr[], int n, int k){
    int l=0, r=n-1;k--;
    while(l<=r){
        int p = lomuto_partition(arr, l, r);
        if(p==k) return arr[p];
        if(p<k) l=p+1;
        else r=p-1;
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<kth_smallest(arr, n, k)<<endl;
}