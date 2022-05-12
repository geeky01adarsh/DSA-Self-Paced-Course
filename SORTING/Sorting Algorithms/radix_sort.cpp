#include <iostream>
using namespace std;

void countingSort(int arr[], int n, int exp)
{
    int count[10], output[n];
    for (int i = 0; i < 10; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (int i = 1; i < n; i++)
        count[i] += count[i - 1]; 
    for (int i = n - 1; i >= 0; i--)
    {
        // int op = (arr[i]/exp)%10;
        output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 0; i < n; i++)
        mx = max(mx, arr[i]);
    for (int exp = 1; mx / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
        
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    radixSort(arr, n);
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
}