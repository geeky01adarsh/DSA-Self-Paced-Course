#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]) min_idx=j;
        }
        swap(arr[i],arr[min_idx]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
