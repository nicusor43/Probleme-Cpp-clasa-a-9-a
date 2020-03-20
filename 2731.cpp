#include<fstream>
using namespace std;
ofstream g("pozitiiconsecutive.out");
ifstream f("pozitiiconsecutive.in");
int main(){
    int x, y, z;
    f>>x>>y;
    g<<y<<"  "<<x<<"  ";
    while(x>0){
        z=2*x-y+2;
        g<<z<<"  ";
        y=x;x=z;
    }
    f.close();
    g.close();
}

