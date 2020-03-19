#include<iostream>

using namespace std;

int t[11]={0,1,2,3,4,5,6,7,8,9,10};

int main(){
   int alegere,nr=10,i,k,poz,x,y,lg;

   cout<<"ce alegi";cin>>alegere;

   if(alegere == 1){
      cout<<"ce poz vrei sa stergi";cin>>poz;

      for(i=1;i<poz;i++){
         t[i]=t[i+1];
      }
      nr--;
   }

   if(alegere == 2){
      cout<<"ce nr vr sa inserezi si pe ce poz ";cin>>k>>poz;

      for(i=nr;i>=poz;i--)
         t[i+1]=t[i];

      t[poz] = k;
      nr++;
   }

   if(alegere == 3){
      cout<<"elementele dintre care 2 pozitii vrei sters";cin>>x>>y;
      lg=y-x+1;
      for(i=y+1; i<=nr; i++)
         t[i - lg] = t[i];
      nr=nr-lg;
   }












   for(i=1;i<=nr;i++)
      cout<<t[i]<<"  ";

}
