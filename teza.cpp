
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");

int a[1000][1000];

int main(){
	int m, n, i, j, nr_cifre, nr_total = 0, nr_linii = 1, ma = -100000, suma_prime = 0, x, prim;
	f >> m >> n;


	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			f >> a[i][j];
			x = a[i][j];
         nr_cifre = 0;
			while(x){
				nr_cifre++;
				x /= 10;
			}
			nr_total += nr_cifre;
			if(a[i][j] > ma) {
				ma = a[i][j];
				nr_linii = 1;
			}
			else if(a[i][j] == ma) nr_linii++;
		}
	}

	cout << nr_total << " cifre" << endl;
	cout <<	nr_linii << " contin " << ma << endl;


	if(m == n){
		if(m % 2 != 0){
			for(i = 1; i <= m; i++){
            x = a[i][i];
            prim = 1;
            if(x < 2)
               prim = 0;
            for(j =2 ; j * j <= x ; j ++)
               if(x % j == 0)
                  prim = 0;
            if(prim){
               suma_prime += x;
            }
         }
         for(i = 1; i <= m  ; i++){
            if(i == (m / 2 + 1)){}
            else{
               x = a[m - i + 1][i];
               prim = 1;
               if(x < 2)
                  prim = 0;
               for(j =2 ; j * j <= x ; j ++)
                  if(x % j == 0)
                     prim = 0;
               if(prim){
                  suma_prime += x;
               }
            }
         }
		}
		else{
            for(i = 1; i <= m; i++){
            x = a[i][i];
            prim = 1;
            if(x < 2)
               prim = 0;
            for(j =2 ; j * j <= x ; j ++)
               if(x % j == 0)
                  prim = 0;
            if(prim){
               suma_prime += x;
            }
         }
         for(i = 1; i <= m ; i++){
            x = a[m - i + 1][i];
            prim = 1;
            if(x < 2)
               prim = 0;
            for(j =2 ; j * j <= x ; j ++)
               if(x % j == 0)
                  prim = 0;
            if(prim){
               suma_prime += x;
            }

         }

		}
		cout << "suma primelor: " << suma_prime;
	}
	else cout << "tabloul nu e patratic";



}

