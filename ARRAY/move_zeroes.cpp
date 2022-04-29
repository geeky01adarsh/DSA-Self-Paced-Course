// Move all the elements to the end keeping the order of the elements same.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0) 
       { swap(arr[i],arr[count]);count++;}
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}