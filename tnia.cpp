#include <fstream>

using namespace std;

ifstream f("tnia.in");
ofstream g("tnia.out");

int v[1000];

int main(){
   int n,m, i,j,q, A,B,C,D, sum = 0,aux ;
   f>>n>>m;
   for(i=1;i<=n;i++) f>>v[i];
   f>>q;
   for(i=1;i<=q;i++){
      f>>A>>B>>C>>D;
      if(max(A,C)>C){
         aux = A;
         A = C;
         C = aux;
      }
      if(max(B,D)>D){
         aux = B;
         B = D;
         D = aux;
      }
      for(j=A;j<=C;j++){
      if(D<=v[j]) sum += D-B+1;
      else if(B<=v[j]) sum += v[j]  -B +1;
      }
      g<<sum<<endl;
      sum = 0;
   }
   g.close();
   return 0;
}
