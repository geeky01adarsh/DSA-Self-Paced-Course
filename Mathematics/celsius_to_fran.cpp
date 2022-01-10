#include <iostream>

using namespace std;

int convertToFahrenheit(int degreeCelcius){
    return ((degreeCelcius*9)/5)+32;
}

int main(){
    int degree_Celcius;
    cin>>degree_Celcius;
    cout<<convertToFahrenheit(degree_Celcius)<<endl;
    return 0;
}