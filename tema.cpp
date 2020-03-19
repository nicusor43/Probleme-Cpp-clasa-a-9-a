#include <iostream>

using namespace std;

int t[1000][1000], ts[1000][1000];

int main(){
    int L, C, i, j, val, k, ll, lc
    cin>>L>>C;

    for(i=1, i<=L; i++)
        for(j = 1; j<=C; j++){
            cin>>val;
            t[i][j] = val;
            }

    for(i=1; i<=L; i++)
        for(j=1; j<=C; j++)
        {
            ts[i][j] = ts[i][j-1];
            for(k=1;k<=i;k++)ts[i][j] += t[k][j];
        }
    for(i=1; i<=k; i++)
        for(j=1l )
}
