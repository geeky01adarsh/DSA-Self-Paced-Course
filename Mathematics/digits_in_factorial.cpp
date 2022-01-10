#include <iostream>
#include <math.h>

using namespace std;

int digits_in_factorial(int n){
    double res = 0;
    for(int i=1; i<=n; i++)
        res+=log10(i);
    return floor(res+1);
}

int main(){
    int n;
    cin>>n;
    cout<<digits_in_factorial(n)<<endl;
    return 0;
}