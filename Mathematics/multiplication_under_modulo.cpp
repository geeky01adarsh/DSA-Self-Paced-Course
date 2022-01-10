#include <iostream>
using namespace std;

long long moduloSum(long long n, long long m){
    return (n*m)%1000000007;
}


int main(){
    long long n,m;
    cin>>n>>m;
    cout<<moduloSum(n,m)<<endl;
}
