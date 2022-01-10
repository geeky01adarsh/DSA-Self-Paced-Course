#include <iostream>
#include <math.h>

using namespace std;

double gpTerm(int a, int b, int n){
    if(n==1) return a;
    if(n==2) return b;
    double d = double(b)/double(a);
    return a*pow(b,n-1);
}

int main(){
    int a,b,n;
    cin>>a>>b>>n;
    cout<<gpTerm(a,b,n)<<endl;
    return 0;
}