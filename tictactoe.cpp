#include <iostream>

using namespace std;

char t[3][3];

int checkForWin(){
   bool egale = true;
   char char_win;
   int i,j;

   if(t[1][1]==t[1][2] && t[1][2]== t[1][3]) return t[1][1];
   else if(t[2][1] == t[2][2] && t[2][2] == t[2][3]) return t[2][1];
   else if(t[3][1] == t[3][2] && t[3][2] == t[3][3]) return t[3][1];
   else if(t[1][1] == t[2][1] && t[2][1] == t[3][1]) return t[3][1];
   else if(t[1][2] == t[2][2] && t[2][2] == t[3][2]) return t[1][2];
   else if(t[3][1] == t[3][2] && t[3][2] == t[3][3]) return t[3][1];
   else if(t[3][1] == t[3][2] && t[3][2] == t[3][3]) return t[3][1];
   else if(t[1][1] == t[2][2] && t[2][2] == t[3][3]) return t[1][1];
   else if(t[3][1] == t[2][2] && t[2][2] == t[1][3]) return t[3][1];
   else return false;




}

int Read_X(){
   int i,j;
   cout<<" JUCATOR 1, UNDE VREI SA PUI X UL? ";
   cin>>i>>j;
   if(t[i][j] != 'X' && t[i][j] != '0') t[i][j] = 'X';
}

int Read_0(){
   int i,j;
   cout<<" JUCATOR 2, UNDE VREI SA PUI 0 UL? ";
   cin>>i>>j;
   if(t[i][j] != 'X' && t[i][j] != '0') t[i][j] = '0';
}

int Afisare(){
   for(int i=1;i<=3;i++){
      for(int j=1; j<=3; j++)
         cout<<t[i][j]<<" ";
         cout<<endl;
   }
}

int main(){
   bool X_0 = false, joc = true;
   while(joc){
   Afisare();
   if(!X_0) Read_X();
   else Read_0();
   if(checkForWin() != false){
      if(checkForWin() == 'X') cout<<"JUCATOR 1 A CASTIGAT! ";
      else cout<<"JUCATOR 2 A CASTIGAT! ";
      joc = false;
   }
   X_0 = !X_0;
}
}
