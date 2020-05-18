#include <iostream>
#include <fstream>

using namespace std;

ofstream g("bac.txt");

int main(){
   int x;
   cin >> x;
   for(x; x>0; x /= 2) g << x << "  ";
}
