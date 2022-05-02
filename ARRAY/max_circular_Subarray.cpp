#include <bits/stdc++.h>
using namespace std;

int kadane_algo(int arr[], int n){
    int temp =0, ans=0;
    for(int i=0; i<n; i++){
        temp = max(arr[i], temp+arr[i]);
        ans = max(ans, temp);

    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum +=arr[i];
    }
    int kd = kadane_algo(arr,n);
    for(int i=0; i<n; i++){
        arr[i]= -arr[i];
    }
    cout<<max(kd,sum+kadane_algo(arr,n))<<endl;
    return 0;
}