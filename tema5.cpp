#include <iostream>

using namespace std;

int t[401][22];

int main(){
    int n, k, i, j, l;
    cin >> n >> k;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= k; j++){
            for(l = 1; l <= n; l++){
                t[(i-1) * k +j][l] = i + l - 1;
            }
        }
    }

   for(i = 1; i <= n * k; i++){
      for(j = 1; j <= n; j++){
         cout << t[i][j] << "  ";
      }
      cout << endl;
   }

}
