#include <iostream>
#include <vector>
using namespace std;

void countSort(int arr[], int n, int k){
    vector<int> count(k,0);
    for(int i=0; i<n; i++) count[arr[i]]++;
    for(int i=1; i<n; i++) count[i] +=count[i-1];
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[count[arr[i]]-1] =arr[i];
        count[arr[i]]--;
    }
    for(int i=0; i<n; i++)
    arr[i]=output[i];
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    countSort(arr, n, k);
    for(int j=0; j<n; j++) cout<<arr[j]<<" ";
}