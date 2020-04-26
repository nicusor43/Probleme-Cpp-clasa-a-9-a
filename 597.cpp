#include <iostream>

using namespace std;

int t[101][101];

int main(){
   int n, m, i, j, sus, jos, st, dr, cont = 1;
   cin>>n>>m;
   for(i=1; i<=n; i++)
      for(j=1; j<=m; j++)
         cin>>t[i][j];


   for(i=1; i<=n && cont; i++) {
      for(j=1; j<=m && cont; j++)
      {
         if(t[i][j] == 1){
            cont = 0;
            sus = i;
         }
      }
   }

   cont = 1;

   for(i=1; i<=n && cont; i++) {
      for(j=1; j<=m && cont; j++)
      {
         if(t[j][i] == 1){
            cont = 0;
            st = i;
         }
      }
   }

   cont = 1;

   for(i=m; i>=1 && cont; i--) {
      for(j=1; j<=m && cont; j++)
      {
         if(t[i][j] == 1){
            cont = 0;
            jos = i;
         }
      }
   }

   cont = 1;

   for(i=m; i>=1 && cont; i--) {
      for(j=1; j<=m && cont; j++)
      {
         if(t[j][i] == 1){
            cont = 0;
            dr = i;
         }
      }
   }

   cout<<jos - sus + 1<<" "<<dr - st + 1<<endl;
   for(i = sus; i <= jos; i++){
      for(j = st; j <= dr; j++)
         cout<<t[i][j]<<" ";
         cout<<endl;
   }

}
