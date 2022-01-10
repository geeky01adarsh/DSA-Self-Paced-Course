#include <iostream>
using namespace std;

bool primaltyTest(int n){
    if(n==2) return 1;
    if(n<2) return 0;
    for(int i=2; i*i<=n; i++)
        if(!(n%i)) return 0;
    return 1;
}

int exactly3divisors(int n){
    int count=0;
    if(n<=3) return count;
    for(int i=1; (i*i)<=n; i++)
        if(primaltyTest(i))
            count++;
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<exactly3divisors(n)<<endl;
    return 0;
}