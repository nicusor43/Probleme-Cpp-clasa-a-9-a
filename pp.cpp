#include <iostream>
using namespace std;
int main(){
    int n,pd,d;
    cin>>n;
    for(d=2;d<=n;d++)
        {
            pd = 0;
            while(n%d==0){pd++;n=n/d;}
            if(pd>0)cout<<d<<"^"<<pd<<" * ";
        }

    cout<<"\b\b  ";
}
