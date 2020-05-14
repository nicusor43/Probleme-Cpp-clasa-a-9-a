#include<iostream>

using namespace std;

int t[100];

int main(){
   int n, i, k, prim;
   cin >> n;
   for(i = 1; i <= n; i++) {
      cin >> k;
      t[i] = k;
   }

   i = 1;

   while(i <= n){
      prim = 1;
      if(t[i] < 2) prim = 0;
      else if(t[i] == 2) prim = 1;
      else{
         for(k=2; k * k <= t[i]; k++)
            if(t[i] % k == 0)
               prim = 0;
      }
      if(prim){
         for(k = i; k <= n; k++){
            t[k] = t[k+1];
         }
         n--;
         i++;
      }
      else{
         i++;
      }
   }

   for(i = 1; i <= n; i++)
      cout<< t[i] << "  ";
}
