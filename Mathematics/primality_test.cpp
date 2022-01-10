#include <iostream>

using namespace std;

bool primaltyTest(int n){
    if(n==2) return 1;
    if(n<2) return 0;
    for(int i=2; i*i<=n; i++)
        if(!(n%i)) return 0;
    return 1;
}

int main(){
    int n;
    cin>>n; 
    cout<<primaltyTest(n)<<endl;
    return 0;
}