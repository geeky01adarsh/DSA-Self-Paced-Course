#include <bits/stdc++.h>
using namespace std;

int recursive_binary_search(int arr[], int low, int high, int target){
    int mid = low+(high-low)/2; 
    if(low>high) return -1;
    if(arr[mid]==target) return mid;
    if(arr[mid]>target) return recursive_binary_search(arr, low, mid-1, target);
    if(arr[mid]<target) return recursive_binary_search(arr, mid+1, high, target);
    return -1;

}

int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = recursive_binary_search(arr, 0, n, target);
    // cout<<"Target present at "<<i<<endl;
    while((i>0) & arr[i]==arr[i-1]) i--;
    // cout<<"Target present at "<<i<<endl;
    int count = 1;
    while((i<n) & arr[i]==arr[i+1]) {i++; count++;}
    cout<<"No. of occurences "<<count<<endl;

    
    return 0;
}
