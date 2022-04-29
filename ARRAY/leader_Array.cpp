//  An element is called the leader if the array 
// if there is no elements greater than it on the right side.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    vector<int> leaders;
    leaders.push_back(arr[n-1]);
    int count = 0;
    for(int i=n-2; i>=0; i--){
        if(arr[i]>leaders[count]){
            leaders.push_back(arr[i]); count++;
        }
    }
    reverse(leaders.begin(), leaders.end());
    for(auto i:leaders) cout<<i<<" ";
}