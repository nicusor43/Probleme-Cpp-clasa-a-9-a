//ce fac cu viata mea cand am la romana 100 de pagini haha lmaooooo:))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
#include <iostream>

int main(){

   int MergeSort(int v[], int st, int dr){

       if(st<dr){
         int m = (st+dr)/2;
         MergeSort(v, st, m);
         MergeSort(v, m+1, dr);
       }
   }

}
