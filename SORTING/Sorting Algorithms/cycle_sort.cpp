#include <iostream>

using namespace std;

void cycleSort_distinct(int arr[], int n)
{
    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
            {
                if (arr[i] < item)
                    pos++;
            }
            swap(item, arr[pos]);
        }
    }
}

void cycleSort(int arr[], int n){
    for(int cs=0; cs<n-2; cs++){
        int item=arr[cs];
        int pos = cs;
        for(int i=cs+1; i<n; i++){
            if(arr[i]<item) pos++;
        }
        if(pos==cs) continue;
        while(arr[pos]==item) pos++;
        if(pos!=cs){
            swap(arr[pos],item);
        }
        while(pos!=cs){
            pos=cs;
            for(int i=cs+1; i<n; i++)
            if(arr[i]<item) pos++;
            while(arr[pos]==item) pos++;
            if(item!=pos)
            swap(arr[pos], item);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cycleSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}