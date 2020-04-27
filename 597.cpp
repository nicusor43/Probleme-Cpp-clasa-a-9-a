#include <iostream>

using namespace std;

int t[101][101];

int main(){
   int n, m, i, j, sus = 1000, jos = -1000, st = 1000, dr = -1000;
   cin>>n>>m;
   for(i=1; i<=n; i++)
      for(j=1; j<=m; j++)
         cin>>t[i][j];

   for(i=1; i<=n; i++){
      for(j=1; j<=m; j++){
         if((j < st) && (t[i][j] == 1))   st = j;
         if((j > dr) && (t[i][j] == 1))  dr = j;
         if((i < sus)  && (t[i][j] == 1)) sus = i;
         if((i > jos) && (t[i][j] == 1)) jos = i;
      }
   }

   cout<<jos - sus + 1<<" "<<dr - st + 1<<endl;
   for(i = sus; i <= jos; i++){
      for(j = st; j <= dr; j++)
         cout<<t[i][j]<<" ";
         cout<<endl;
   }

}
