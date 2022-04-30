// maximum consecutive one's in an binary array.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < n; )
    {
        int temp = 0;
        if(arr[i])
        while(arr[i]==1 && i<n){
            temp++; i++;
        }
        else i++;
        ans = max(temp,ans);
    }
    cout<<ans<<endl;
}