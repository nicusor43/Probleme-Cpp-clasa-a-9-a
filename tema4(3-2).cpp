#include<iostream>

using namespace std;

int t[100];

int main(){
   int n, i, k, j, prim;
   cin >> n;
   for(i = 1; i <= n; i++) {
      cin >> k;
      t[i] = k;
   }

   k = 0;

   for(i = 1; i <= n; i++){
      prim = 1;
      if(t[i] < 2) prim = 0;
      else if(t[i] == 2) prim = 1;
      else{
         for(j=2; j * j <= t[i]; j++)
            if(t[i] % j == 0)
               prim = 0;
      }

      if(!prim){
         k++;
         t[k] = t[i];
      }
   }

   n = k;

   for(i = 1; i <= n; i++)
      cout<< t[i] << "  ";

}
