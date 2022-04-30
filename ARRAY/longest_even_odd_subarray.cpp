#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1;)
    {
        int temp = 1;
        bool flag;
        flag = arr[i]%2;
        while(true){
            if((arr[++i]%2==0)&& flag) temp++;
            else if((arr[i]%2==1)&& !flag) temp++;
            else break;
        }
        ans = max(temp,ans);
    }
    cout<<ans<<endl;
}