#include <bits/stdc++.h>

using namespace std;

int main(){
    // int n;
    // cin>>n;
    int arr[3][3] = {{11,12,13}, {21,22,23}, {31,32,33}};
    int n = 3;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After rotating:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        // cout << endl;
    }
    int low=0, high=2;
    while(low<high){
        for(int i=0; i<3; i++){
            swap(arr[low][i], arr[high][i]);
        } low++; high--;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}