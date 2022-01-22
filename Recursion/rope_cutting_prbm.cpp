// we are given a rope of length n
// we require to cut it into maximum piece
// such the size of each piece is either a, b, c.

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int caseSum(int n, int a, int b, int c){
    if (n==0) return 0;
    else if(n<0) return -1;
    int res = max(caseSum(n-a,a,b,c), max(caseSum(n-b,a,b,c), caseSum(n-c,a,b,c)));
    if(res==-1) return -1;
    return res+1;
}

int main()
{
    int t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int n, a, b, c;
        cin>>n>>a>>b>>c;
        cout<<caseSum(n,a,b,c)<<endl;
    }
    return 0;
}