#include<iostream>

using namespace std;

int t[100];

int main(){
   int n, i, k, nr_sters;
   cin >> n;
   for(i = 1; i <= n; i++) {
      cin >> k;
      t[i] = k;
   }

   i = 1;
   cin >> nr_sters;

   while(i <= n){
      if(i == nr_sters){
         for(k = i; k <= n; k++){
            t[k] = t[k+1];
         }
         n--;
         i++;
      }
      else
         i++;
   }

   for(i = 1; i <= n; i++)
      cout<< t[i] << "  ";
}
