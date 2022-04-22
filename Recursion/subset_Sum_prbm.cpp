#include <iostream>

using namespace std;

int countSubsets(int n, int arr[], int sum){
    if(n==0)
        return sum == 0 ?  1 : 0;
    return countSubsets(n-1,arr,sum) + countSubsets(n-1, arr,sum-arr[n-1]);
}

int main(int argc, char const *argv[])
{
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cout<<countSubsets(n,arr, sum)<<endl;
    return 0;
}
