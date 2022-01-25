#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void toh(int n, char A, char B, char C)
{
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    toh(n-1,A,C,B);
    cout<< "Move "<<n <<" form "<<A<<" to "<< C <<endl;
    toh(n-1, B, A, C);
}
int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {

        int n;
        cin >> n;
        toh(n, 'A', 'B', 'C');
    }
    return 0;
}