#include <iostream>
using namespace std;

void twoWayPartioning(int arr[], int n, int p)
{
    int low=0, high=n-1, mid=0;
    while(mid<=high){
        if(arr[mid]<p)
        swap(arr[low++], arr[mid++]);
        else if(arr[mid]==p)
        mid++;
        else swap(arr[mid], arr[high--]);
    }
}

int main()
{
    int n, p;
    cin >> n >> p;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    twoWayPartioning(arr,n, p);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}