#include <iostream>

using namespace std;

void loop(int n){
    if(n==0)
    return;
    loop(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n; 
    loop(n);

}