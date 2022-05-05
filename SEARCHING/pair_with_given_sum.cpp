#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int low =0 ,high = n-1;
    while(low<high){
        int temp = arr[low]+arr[high];
        if(temp==target){
            cout<<low++<<" "<<high--<<endl;
            // break;

        }
        if(temp>target) high--;
        else if(temp<target) low++;
    }
}