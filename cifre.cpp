#include<fstream>
#include<iostream>
using namespace std;

int v[10] = {6,2,5,5,4,5,6,3,7,6}; //Fiecare nr din vector are o valoare
int x[10] = {1,5,2,2,3,2,1,2,1,1};

ifstream f("cifre.in");
ofstream g("cifre.out");

int main()
{
    int V, nc, ns=0, nmax=1, nsc, nrc, ns2=0;
    f>>V;
    if(V==1)
    {
        f>>nc;
        while(nc != 0)
        {
            ns+=v[nc%10];
            nc/=10;
        }
        g<<ns;
        return 0;
    }
    else if(V==2)
    {
        f>>nc;
        while(nc != 0)
        {
            nmax*=10;
            ns+=v[nc%10];
            nc/=10;
        }
        for(int i = nc; i< nmax; i++ )
        {
            nrc=i;
            nsc=0;
            while(nrc!=0)
                {
                    nsc+=v[nrc%10];
                    nrc/=10;
                }
            if(nsc>ns)ns2+=1;
        }
    g<<ns2;
    }
}
