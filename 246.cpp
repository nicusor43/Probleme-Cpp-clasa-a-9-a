#include<iostream>
using namespace std;
int main(){
    int vart, n, i1=0, i2=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>vart;
        if(vart%2==1){i2=i1;i1=vart;}
    }
    if(i1 == 0 || i2 == 0){cout<<"Numere insuficiente";}
    else cout<<i1<<"  "<<i2;
}
