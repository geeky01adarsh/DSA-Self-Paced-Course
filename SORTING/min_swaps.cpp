#include <iostream>

using namespace std;

int min_swaps(int arr[], int n){
    int writes=0;
    for(int cs=0; cs<n-2; cs++){
        int item=arr[cs], pos=cs;
        for(int i=cs+1; i<n; i++) if(arr[i]<item) pos++;
        if(cs==pos) continue;
        while(arr[pos]==item)pos++;
        if(pos!=cs){
            swap(arr[pos], item);
            writes;
        }
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1; i<n; i++) if(arr[i]<item) pos++;
            while(arr[pos]==item) pos++;
            if(item!=arr[pos]){
                swap(arr[pos], item);
                writes++;
            }
        }
    }
    return writes;
}

int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++) cin>>arr[i];
     cout<<min_swaps(arr,n)<<endl;
     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}