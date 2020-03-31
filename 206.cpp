#include <iostream>

using namespace std;

int t[50][50];

int main()
{
      int n, m, mi, i, j;
      cin>>n>>m;

      mi = min(n,m);
      for( i = 1; i<=mi; i++){
         for( j = i; j<=m; j++) t[i][j] = i;
         for( j = i; j<=n; j++) t[j][i] = i;
      }

      for(int i = 1; i<=n; i++) {
         for(int j = 1; j<=m; j++)
            cout<<t[i][j]<<" ";
            cout<<endl;
      }

}
