#include <fstream>

using namespace std;

ifstream f("mere.in");
ofstream g("mere.out");

int v[1000000];

int main(){
   int N,T,K,i,j,nrs, mere, pers;

   f>>N>>T>>K;
   for(i=1;i<=T;i++){
      f>>nrs>>mere;
         for(j = nrs, mere; j<=N && mere>0 ;j++,mere-- ){
            v[j]++;
            if(j==N)j=0;
         }
   }
   for(i=1;i<=K;i++){
      f>>pers;
      g<<v[pers]<<"  ";
   }
}
