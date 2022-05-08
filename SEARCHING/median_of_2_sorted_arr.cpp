#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    int arr[2 * n];
    int i = 0, j = 0, k=0;
    while (i < n && j < n)
    {
        if(arr1[i]<arr2[j]){
            arr[k++] = arr1[i++];
        }
        else arr[k++] =arr2[j++];
    }
    while(i<n) arr[k++] = arr1[i++];
    while(j<n) arr[k++] = arr2[j++];
    for(int i=0; i<2*n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<(arr[n]+arr[n-1])/2<<endl;
}