#include <iostream>
using namespace std;

int lomuto_partition(int arr[], int l, int h){
    int pivot=arr[h];
    int i = l-1;
    for(int j=l; j<=h-1; j++)
    if(arr[j]<=pivot) swap(arr[++i], arr[j]);
    
    swap(arr[i+1],arr[h]);
    return i+1;
}

int main(){
    int n, p;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<lomuto_partition(arr,0, n-1)<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}