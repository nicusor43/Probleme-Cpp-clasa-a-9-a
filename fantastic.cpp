#include<fstream>
#include<iostream>
using namespace std;

ifstream f("fantastice.in");
ofstream g("fantastice.out");

int ciur[100000];

int main(){
    int n, nc, i, b=1, nd=2, np=0;
    for(i=2; i<=100000; i+=1)
        if(ciur[i]==0)
            for(int j=2*i; j*i<=10000;j+=i)ciur[j]=1;
    f>>n;
    for(b=1;b<=n;b++){
        nd=2;
        f>>nc;
        for(int i=1; i*i<=nc ; i++){
            if(nc%i==0)
            {
                nd++;
                if(i*i<n)nd++;
            }
        }
        cout<<nd<<"  ";
        if(ciur[nd]==0)np++;

    }
    g<<np;
    f.close();
    g.close();
}
