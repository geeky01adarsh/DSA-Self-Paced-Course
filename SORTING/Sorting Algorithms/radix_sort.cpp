#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int lower_bound = 2;
    int upper_bound = 10;

    while (lower_bound <= upper_bound)
    {
        int mid = (lower_bound + upper_bound) / 2;
        cout << mid << endl;
        int response;
        cin >> response;

        if (response == -1)
            lower_bound = mid + 1;

        else if (response == 1)
            upper_bound = mid - 1;
        
        else if (response == 0){
            cout << "Number guessed is :" + to_string(mid) << endl;
            break;
        }
    }
    return 0;
}