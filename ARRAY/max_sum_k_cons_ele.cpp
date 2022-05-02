// find the maximum sum of k consecutive elements
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0; i<k; i++) sum+=arr[i];
    for(int i=k; i<n; i++) {
        int temp = sum+arr[i]-arr[i-k];
        sum = max(sum, temp);
    }
    cout<<sum<<endl;
}