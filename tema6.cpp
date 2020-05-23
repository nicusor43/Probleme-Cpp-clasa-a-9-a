#include <iostream>

using namespace std;

int v_fr[10];

int main(){

   int n, i , j, cifra, nr_apar;
   cin >> n;

   for(i = 1; i <= n; i++){
      cin >> j;
      while(j){
         cifra = j % 10;
         v_fr[cifra]++;
         j /= 10;
      }
   }
   nr_apar = v_fr[1];
   cifra = 1;
   for(i = 1; i <= n; i++){
      if(nr_apar < v_fr[i]){
         nr_apar = v_fr[i];
         cifra = i;
      }
   }
   cout << cifra << " apare de " << nr_apar << " ori";

}
