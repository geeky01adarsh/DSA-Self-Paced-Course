// the n-bonacci the term is equal to sum last n terms
#include <bits/stdc++.h>

using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m], sum=1;
    arr[0]=0, arr[1]=1;
    for(int i=0; i<n-1; i++){
        arr[i] =0; 
        cout<<arr[i]<<" ";
        // sum+=arr[i];
    }
    arr[n-1] =1;
    cout<<1<<" ";

    for(int i=n; i<m; i++){
        arr[i] = sum;
        cout<<sum<<" ";
        sum += (arr[i]-arr[i-n]); 
    }
    return 0;
}