#include <fstream>
#include <iostream>

using namespace std;

int v[10000];

ifstream f("densitate.in");
ofstream g("densitate.out");

int main(){
   int N, i, j,nr=0,sum = 0;
   float D;
   f>>N;
   for(i=1;i<=N;i++) f>>v[i];
   f>>D;
   cout<<D;
   for(i=1; i<=N;i++){
      for(j=i; j<=N;j++){
         if(v[i]%2==0)sum++;
         if(sum/(j-i+1)==D) nr++;


      }
      sum = 0;
   }

   g<<nr;
}
