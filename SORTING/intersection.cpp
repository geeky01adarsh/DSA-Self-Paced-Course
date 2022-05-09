#include <iostream>
using namespace std;

int intersection_count(int arr1[], int arr2[], int n, int m){
    int count =0;
    int i=0, j=0;
    while(i<n && j<m){
        if(i>0 && arr1[i]==arr1[i-1]) { i++; continue;}
        if(j>0 && arr2[j]==arr2[j-1]) { j++; continue;}
        if(arr1[i]==arr2[j]){
            count++; i++; j++;
        }
        else if(arr1[i]<arr2[j]) i++;
        else j++;
    }
    return count;

}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0; i<n; i++) cin>>arr1[i];
    for(int i=0; i<m; i++)cin>>arr2[i];
    cout<<intersection_count(arr1,arr2, n, m)<<endl;

}