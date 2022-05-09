#include <iostream>
using namespace std;

int hoare_partition(int arr[], int l, int h){
    int pivot=arr[l];
    int i=l-1, j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j+1;
        swap(arr[i],arr[j]);
    }  
    // }
    return 0;
}

int main(){
    int n, p;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<hoare_partition(arr,0, n-1)<<endl;
    // for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}