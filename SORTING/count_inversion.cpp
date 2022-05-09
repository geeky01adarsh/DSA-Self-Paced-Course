#include <iostream>

using namespace std;
int countandMerge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1, n2 = h - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[i + l];
    for (int i = 0; i < n2; i++)
        right[i] = arr[i + l + m];
    int res = 0, i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else
        {
            arr[k++] = right[j++];
            res += n1 - i;
        }
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
    return res;
}

int count(int arr[], int l, int h)
{
    int res = 0;
    if (l < h)
    {
        int m = (h + l) / 2;
        res += count(arr, l, m);
        res += count(arr, m + 1, h);
        res += countandMerge(arr, l, m, h);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << count(arr, 0, n - 1) << endl;
}