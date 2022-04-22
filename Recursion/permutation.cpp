#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutate(string s, int i=0){
    if(i== s.length()-1){
        cout<<s<<endl;
        return;
    }
    for(int j=0; j<s.length(); j++){
        swap(s[i],s[j]);
        permutate(s, i+1);
        swap(s[i],s[j]);
    }
}
int main(){
    string s;
    cin>>s;
    permutate(s);
}