#include <iostream>

using namespace std;

int t[401][22];

int main(){
    int n, k, i, j, l;
    cin >> n >> k;

    for(i = 1; i <= k; i++){
        for(j = 1; j <= n; j++){
            for(l = 1; l <= k; l++){
                t[(i-1) * n +j][l] = i + l - 1;
            }
        }
    }

   for(i = 1; i <= n * k; i++){
      for(j = 1; j <= k; j++){
         cout << t[i][j] << "  ";
      }
      cout << endl;
   }

}
