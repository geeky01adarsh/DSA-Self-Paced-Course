#include <iostream>
using namespace std;

int lomuto_partition(int arr[], int l, int h){
    int pivot=arr[h];
    int i = l-1;
    for(int j=l; j<=h-1; j++)
    if(arr[j]<pivot) {i++;swap(arr[i], arr[j]);}
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quicksort(int arr[], int l, int h){
    if(l<h){
        int p = lomuto_partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    quicksort(arr,0, n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}