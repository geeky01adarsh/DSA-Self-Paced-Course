#include <bits/stdc++.h>
using namespace std;

bool divide(int arr[], int n){
    int pre[n], suff[n];
    pre[0] = arr[0];
    suff[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + arr[i];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = suff[i + 1] + arr[i];
    int x = suff[0]/3, f=-1, s=-1;
    for(int i=0; i<n; i++){
        if(pre[i]==x){f=i; break;}
    }
    for(int i=n-1; i>=0; i--){
        if(suff[i]==x){s=i; break;}
    }
    if(f==-1 || s==-1) return 0;
    cout<<f<<" "<<s<<endl;
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n], sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum%3){
        cout<<-1<<endl;
        return 0;
    }
    cout<<divide(arr, n);

}