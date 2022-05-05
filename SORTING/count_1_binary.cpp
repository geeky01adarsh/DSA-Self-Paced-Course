#include <iostream>
using namespace std;

int binary_search(int arr[], int n){
    int low=0, high = n-1;
    if(!arr[high]) return -1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==1){
            if(mid==0 || arr[mid-1]!=1) return mid;
            high = mid;
        }
        else if(arr[mid]==0) low = mid;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int ans = binary_search(arr,n);
    if(ans != -1)
    cout<<n-ans<<endl;
    else cout<<-1<<endl;
}