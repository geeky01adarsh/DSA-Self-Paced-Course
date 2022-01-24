#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void subsets(string s, string curr = "", int i = 0)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }
    subsets(s, curr, i+1);
    subsets(s, curr + s[i], i+1);
}

int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        string s;
        cin >> s;
        subsets(s);
    }
    return 0;
}