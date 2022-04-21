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


int binary_search_iterative(int arr[], int n, int target)
{
    int low=0, high=n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) high=mid-1;
        else low = mid+1;
    }
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
    cout<<"Target present at "<<binary_search_iterative(arr, n, target)<<endl;
    cout<<"Target present at "<<recursive_binary_search(arr, 0, n, target)<<endl;
    return 0;
}
