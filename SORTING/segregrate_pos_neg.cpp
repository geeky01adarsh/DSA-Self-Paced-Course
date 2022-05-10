#include <iostream>
using namespace std;

void segPosNeg(int arr[], int n)
{
    int i=-1, j=n;
    while(1){
        do{i++;}while(arr[i]<0);
        do{j--;}while(arr[j]>=0);
        if(i>=j) return;
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    segPosNeg(arr,n);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}