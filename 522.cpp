#include <iostream>

using namespace std;


int t[10000];

int main() {
   int n, k, sec1, sec2, i, j,v,i2, egal = 1;
   cin>>n>>k;
   for(i=1;i<=n;i++) cin>>t[i];
   for(i=1;i<=n-k+1; i++){
      for(j=i+1; j<=n-2*k+1; j++)
         for(v=j,i2 = i ; v<=j+k; v++,i2++)
         {
         if(t[i2] != t[v]) egal = 0;
      }
      if(egal == 1) {
            sec1 = i;
            sec2 = i+k;
            cout<<sec1<<"  "<<sec2;
            return 0;
      }
   }
   cout<<"NU";
}
