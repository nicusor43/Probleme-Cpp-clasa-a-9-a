#include<iostream>

using namespace std;

int t[100];

int main(){
   int n, i, k;
   cin >> n;
   for(i = 1; i <= n; i++) {
      cin >> k;
      t[i] = k;
   }

   k = 0;

   for(i = 1; i <= n; i++){
      if(t[i] % 2 != 0){
         k++;
         t[k] = t[i];
      }
   }
   n = k;

   for(i = 1; i <= n; i++)
      cout<< t[i] << "  ";
}
