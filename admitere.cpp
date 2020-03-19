#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("admitere.in");
ofstream g("admitere.out");

int R[2000], U[2000], P_U[2000], P_R[2000];

int main(){
   int v,n, m,i,j, max_r =0, max_u = 0;
   f>>v>>n>>m;
   for(i = 1; i<=m; i++){
      f>> R[i];
   }
   sort(R+1,R+m+1);
   for(i=1; i<=m; i++){
      f>> U[i];
   }
   sort(U+1,U+m+1);

   for(i=1;i<=n; i++){
      f>>P_R[i]>>P_U[i];
   }
   sort(P_R+1, P_R+1+n);
   reverse(P_R+1, P_R +1+n);

   sort(P_U+1, P_U+1+n);
   reverse(P_U+1, P_U +1+n);


   if(v==1){
      for(i=1, j=1; i<=n; i++){
         if(P_R[i]>R[j]){
            max_r++;
            j++;
         }
      }
      for(i=1, j=1; i<=n; i++){
         if(P_U[i]>U[j]){
            max_u++;
            j++;
         }
      }
      if(max_r >= max_u){
            g<<max_r;
            for(i=1;i<=n;i++)
      }
      else g<< max_u;
   }

}
