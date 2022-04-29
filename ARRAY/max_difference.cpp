#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int res = arr[1]-arr[0], minv=arr[0];
    for(int i=1; i<n; i++){
        minv = min(arr[i], minv);
        res = max(res, arr[i]-minv);
    }
    cout<<res<<endl;
    return 0;
}