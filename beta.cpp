#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

ifstream f("beta.in");
ofstream g("beta.out");

int main(){
    int n, poz,i, lun=0, pw, x, cnt;
    bool st_dr = true;

    f>>n>>poz;
    for(i=0;pow(2,i)<=n;i++) lun+=pow(2,i);
    pw = i-1;
    //cpw = pw;
    if(poz>lun){
      g<<-1;
      return 0;
    }

    for(i=1; i<=poz;){

      if(st_dr) for(x=n-pow(2,pw)+1,cnt=1;i<=poz && cnt<=pow(2,pw); x++,i++,cnt++){}
      else for(x=n, cnt = 1;cnt<= pow(2,pw) && i<=poz;cnt++, x--,i++){}
      st_dr = !st_dr;
      pw--;
    }

    g<<--x;

}
