#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int first_set_bit = log2(n & -n) +1;
    cout<<first_set_bit<<endl;
}