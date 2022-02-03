#include <iostream>
#include <string>
using namespace std;

void powerSet(string str){
    int n = 1<<str.length();
    for(int i=0; i<n; i++){
        for(int j=0; j<str.length(); j++){
            if(i&j)
            cout<<str[j];
        }
        cout<<endl;
    }

}

int main(){
    string s;
    cin>>s;
    powerSet(s);
}