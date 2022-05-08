#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n){
    bool swapped;
    for(int i=0; i<n; i++){
        swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(!swapped) return;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}