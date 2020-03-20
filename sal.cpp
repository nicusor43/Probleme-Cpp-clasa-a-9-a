#include<iostream>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"este cel mai mare";
        }
    }
    if(b>a){
        if(b>c){
            cout<<b<<"este cel mai mare";
        }
    }
    else
        cout<<c<<"este cel mai mare";
}
