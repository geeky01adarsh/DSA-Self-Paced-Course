#include <iostream>

using namespace std;

int correct_idx(int arr[], int l, int h, int p){
    int temp[h-l+1];
    int index=0;
    for(int i=l; i<=h; i++) if(arr[i]<arr[p]) temp[index++]=arr[i];
    for(int i=l; i<=h; i++) if(arr[i]==arr[p]) temp[index++]=arr[i];
    int res = l+index-1;
    for(int i=0; i<=h; i++) if(arr[i]>arr[p]) temp[index++]=arr[i];
    for(int i=l; i<=h; i++) arr[i]=temp[i];
    return res;
    
}

int main(){
    int n, p;
    cin>>n>>p;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<correct_idx(arr,0, n-1, p)<<endl;
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}