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

    for (int i = 0; i < n; i++)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            if(i==low){
                low++;
                continue;
            } if(i==high) high--;
            int temp = arr[low] + arr[high] + arr[i];
            if (temp == target)
            {
                cout << low++ << " " << i << " " << high-- << endl;
                // break;
            }
            if (temp > target)
                high--;
            else if (temp < target)
                low++;
        }
    }
}