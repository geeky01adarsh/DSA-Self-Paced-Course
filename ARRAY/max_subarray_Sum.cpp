// This algorithm is also known as Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int ans=arr[0], temp=arr[0];
    for(int i=1; i<n; i++){
        temp = max(arr[i], temp+arr[i]);
        ans = max(ans, temp);
    }
    cout<<ans<<endl;
}