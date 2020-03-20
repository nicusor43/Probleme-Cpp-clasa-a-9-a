#include<iostream>
using namespace std;
int main(){
    double a,b,c,ma,mi;
    cin>>a>>b>>c;
    ma=a;
    if(b>ma)ma=b;
    if(c>ma)ma=c;
    mi=a;
    if(mi>b)mi=b;
    if(mi>c)mi=c;
    cout<<"Val min e "<<mi<<'\n'<<"val max e "<<ma;
}
