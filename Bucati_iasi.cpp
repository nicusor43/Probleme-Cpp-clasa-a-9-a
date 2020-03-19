#include<fstream>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

ifstream f("bucati.in");
ofstream g("bucati.out");

int t[1000000], ciur[100000];

int main(){
   int nr,C, cop, cop2,  l=0, i,sum=0,n=1, mi = 10e15, j, i2;
   f>>C>>nr;
   cop = nr;

   while(cop){
      cop /= 10;
      l++;
   }

   cop=nr;

   for(i=l;i>=1;i--){
      cop2=cop;
      t[i]=(cop2)%10;
      cop/=10;
   }


   if(C==1){
      sort(t+1,t+l+1);
      reverse(t+1,t+l+1);

      for(i=1;i<=l-3;i++)n*=10;

      for(i=1;i<=l-2;i++){
         sum+=t[i]*n;
         n/=10;

      }
      sum+=t[l-1];
      sum+=t[l];


   }
   g<<sum;


   if(C==2){
      //sort(t+1,t+l+1);
      ciur[0] = 1;
      for(i=2;i*i<=nr;i++)
         if(ciur[i]==0)
         for(j=2;j<=nr/i;j++) ciur[i*j] = 1;
      for(i=1;i<=n;i++){
         for(j=1;j<=n;i++)
            for(i2=1; i<=n; i++)
      }

   }



}
