#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int zc=0, oc=0;
    for(int i=0; i<n;){
        if(arr[i]==1){
            oc++;
            // cout<<oc<<endl;
            while(arr[++i]) continue;
        }
        else{
            zc++;
            while(arr[++i]==0) continue;
        }
    }
    cout<<min(oc,zc)<<endl;
}
