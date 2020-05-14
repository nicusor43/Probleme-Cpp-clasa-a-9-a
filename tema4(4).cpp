#include<iostream>

using namespace std;

int t[100];

int main(){
   int n, i, k, nr_opriri = 0, ultim = 0;
   cin >> n;
   for(i = 1; i <= n; i++) {
      cin >> k;
      t[i] = k;
   }

   k = 0;

   for(i = 1; i <= n; i++){
      if(!(t[i] == t[i+1] || ultim)){
         k++;
         t[k] = t[i];

      }
      if(t[i] == t[i+1]) ultim = 1;
      else if(ultim)   {
         ultim = 0;
         nr_opriri++;
      }
   }
   n = k;

   cout<< "Numarul de opriri este "<< nr_opriri<< endl;

   for(i = 1; i <= n; i++)
      cout<< t[i] << "  ";


}


