#include<fstream>
#include<iostream>


using namespace std;

ifstream f("ace.in");
ofstream g("ace.out");

int t[1000][1000];

int main(){
   int C,N,M,i,j,nr=0;
   double hMax= 0.1  , hAbs;
   f>>C>>N>>M;
   for(i=1;i<=N;i++)
      for(j=1;j<=M;j++)
         f>>t[i][j];

   if(C==1){
   for(i=M-1;i>=1;i--){
      hAbs = t[N][i] / (double)(M-i);
      cout<<hAbs<<endl;
      if(hAbs > hMax){
         hMax = hAbs;
         nr++;
      }
   }
   hMax = -1000.0;
   for(i=N-1;i>=1;i--){
      hAbs = t[i][M] / (double)(N-i);
      cout<<hAbs<<endl;
      if(hAbs > hMax){
         hMax = hAbs;
         nr++;
      }
   }

   g<<nr;
   }


   if(C==2){
      for(i=1; i<= )
   }

}
