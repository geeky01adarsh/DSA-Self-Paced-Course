#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i)
    {
        int temp = arr[i], cnt = 0;
        while (arr[i] == temp)
        {
            cnt++;
            i++;
        }
        v.push_back({temp, cnt});
    }
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}