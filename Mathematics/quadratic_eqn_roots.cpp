#include <iostream>
#include <math.h>
using namespace std;

void quadraticRoots(int a, int b, int c){
    int d = (b*b) - (4*a*c);
    if (d<0){
        cout<<"There is no valid quadratic roots for this expression"<<endl;
        return;
    }
    int root1 = floor((sqrt(d)-b)/(2*a));
    int root2 = floor((b+sqrt(d))/(-2*a));
    cout<<"First root is "<<root1<<" and second root is "<<root2<<endl;
    return;
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    quadraticRoots(a,b,c);
    return 0;
}