#include <fstream>
#include<iostream>
#include <algorithm>

using namespace std;

ifstream f("roboti2.in");
ofstream g("roboti2.out");

int t[200000];

int main(){
   int v,n,j,i,ma=0,nr=1, nr_mut;
   bool st_dr = true;
   f>>v;
   f>>n;
   for(i=1;i<=n;i++){
    f>>t[i];
    }
    for(i=n+1;i<=2*n;i++){
        t[i] = t[i-n];
    }
   if(v==1){
   for(i=2;i<=2*n;i++){
      if(t[i]>t[i-1]){
         nr++;
         if(nr>ma) ma=nr;
   }
   else nr = 1;
   }
   g<<ma;
   }

   if(v==2){
      stable_sort(t+1,t+n+1);
      for(j=n-2; j>2; j--){
         if(st_dr == true){
            nr_mut = t[j];
            for(i=j;i<=n;i++) t[i] = t[i+1];
            t[n] = nr_mut;
         }
         st_dr = !st_dr;
      }
      for(i=1;i<=n;i++) g<<t[i]<<"  ";

   }




}
