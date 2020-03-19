#include <fstream>
#include <iostream>

using namespace std;

ifstream f("cufar.in");
ofstream g("cufar.out");

int ciur[50000];

int main(){
   int p, k, n, div , div_n, i, j, cnt = 0;
   cin>>p>>k;



   if(p==1){
      cin>>n>>div;
      ciur[2] = 0;
      for(i = 2; i*i<=n ; i++){
         if(ciur[i]==0){
            for(j=2 ; j <=n/i; j++) ciur[i*j] = 1;
      }
   }
      int cop_n  = n;
      for(div_n = 2, cnt  = 1; div_n < n/2 && cnt<= div; div_n++){
         if((n % div_n == 0) && (ciur[div_n]==0)){
            cnt++;
         }
      }
      cout<<--div_n;
   }
}
