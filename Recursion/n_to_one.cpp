#include <iostream>

using namespace std;

void loop(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    loop(n-1);
}

int main(){
    int n;
    cin>>n; 
    loop(n);
}