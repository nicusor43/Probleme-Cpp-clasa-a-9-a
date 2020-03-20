#include<iostream>
using namespace std;
int main(){
    int a,sum;
    cin>>a;
    if(a>=100&&a<=999)
        {sum=a%10+(a/10-a/100*10)+a/100;
        cout<<sum;}
    else
        cout<<"Nr nu e de 3 cifre";
}
