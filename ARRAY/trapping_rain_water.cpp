#include <iostream>

using namespace std;

int naive(int arr[], int n){
    int res=0;
    for(int i=1; i<n; i++){
        int lmax = arr[i];
        for(int j=0; j<i; j++){
            lmax = max(lmax,arr[j]);
        }
        int rmax = arr[i];
        for(int j=i; j<n; j++)
        rmax=max(rmax,arr[j]);
        res +=( min(lmax,rmax)-arr[i]);
    }
    return res;
}

int efficient(int arr[], int n){
    int res=0;
    // cout<<res;
    int lmax[n], rmax[n];
    lmax[0]=arr[0]; rmax[n-1]=arr[n-1];
    for(int i=1; i<n; i++)
    lmax[i]=max(lmax[i-1],arr[i]);
    for(int i=n-2; i>=0; i--)
    rmax[i]=max(rmax[i+1],arr[i]);
    for(int i=0; i<n-1; i++) res+= (min(lmax[i],rmax[i])-arr[i]);
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<naive(arr,n)<<endl;
    cout<<efficient(arr,n)<<endl;

}