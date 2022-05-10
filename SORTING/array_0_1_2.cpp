#include <iostream>
using namespace std;

void seg012(int arr[], int n)
{
    int low=0, high=n-1, mid=0;
    while(mid<=high){
        if(arr[mid]==0)
        swap(arr[low++], arr[mid++]);
        else if(arr[mid]==1)
        mid++;
        else swap(arr[mid], arr[high--]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    seg012(arr,n);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}