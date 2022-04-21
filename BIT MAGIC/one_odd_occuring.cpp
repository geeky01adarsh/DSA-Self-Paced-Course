#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int oddOccuring(int n, int arr[]){
    int x=arr[0];
    for(int i=1; i<n; i++){
        x = x^arr[i];
    }
    return x;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Odd Occuring number is: "<<oddOccuring(n, arr)<<endl;
}