#include <iostream>
using namespace std;

void twoWayPartioning(int arr[], int n, int pi, int pe)
{
    int low=0, high=n-1, mid=0;
    while(mid<=high){
        if(arr[mid]<pi)
        swap(arr[low++], arr[mid++]);
        else if(arr[mid]<=pe && arr[mid]>=pi)
        mid++;
        else swap(arr[mid], arr[high--]);
    }
}

int main()
{
    int n, pi, pe;
    cin >> n >> pi >> pe;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    twoWayPartioning(arr,n, pi, pe);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}