#include <fstream>
#include <iostream>

using namespace std;

int t[2000][2000], lo[2000][2000], lv[2000][2000];

ifstream f("fadema.in");
ofstream g("fadema.out");

int main(){
   int N,M, i,j,k,l, armax=0, ar,lmin=100000, m;
   f>>N>>M;
   for(i=1;i<=N;i++)
      for(j=1;j<=M;j++)
      f>>t[i][j];

   for(i=1;i<=N;i++){
      lo[i][M] = 1;
      for(j=M-1;j>=1;j--){
         if(t[i][j]==t[i][j+1]) lo[i][j] = 1;
         else lo[i][j] = lo[i][j+1] + 1;
      }
   }
   for(j=1;j<=M;j++){
      lv[N][j] = 1;
      for(i=N-1;i>=1;i--){
         if(t[i][j]==t[i+1][j]) lv[i][j] = 1;
         else lv[i][j] = lv[i+1][j] + 1;
      }
   }

   for(i=1;i<=N;i++){
      for(j=1;j<=M;j++){
         if(lo[i][j]!=1){
               m = lo[i][j];
            for(k = 1 , j;k<=m;k++ , j++){
               l = lv[i][j];
               ar = k * l;
               if(ar>armax) armax = ar;
            }
         }
      }
   }


   g<<armax;
}
