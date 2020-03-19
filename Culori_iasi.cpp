#include<fstream>
#include<iostream>

using namespace std;

ifstream f("culori.in");
ofstream g("culori.out");

int t[1000001],b[1000001];


int main(){
   int  C,CU,N,M,n=1,ma = 0,i,ls,ld,x;
   f>>C>>CU>>N>>M;
   for(i=1;i<=N;i++)
         f>>t[i];
   if(C==1){

      for(i=2;i<N;i++){
         if(t[i]==t[i-1]) n++;
         else if(n>ma){
               ma=n;
               n=1;}
         else n=1;
      }
   g<<ma;
   }

   if(C==2){

      for(i=1;i<=M;i++){
         f>>ls>>ld>>x;
         b[ls]+=x;
         b[ld+1]-=x;
      }

      for (int i = 1; i <= N; i++) {
         b[i] += b[i - 1];
         t[i] += b[i];
      }

      for(i=1;i<=N;i++)g<<t[i]<<"  ";
   }




   f.close();
   g.close();
   return 0;

}
