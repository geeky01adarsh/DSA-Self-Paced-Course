#include <iostream>

using namespace std;

void print(int arr[], int n)
{
    int curr_val = arr[0], count = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] == curr_val && i < n)
        {
            count++;
            i++;
        }
        cout << "The frequency of " << curr_val << " is " << count << endl;
        i--;
        if (i != n)
        {
            curr_val = arr[i+1];
        }
        count=0;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    print(arr, n);
}