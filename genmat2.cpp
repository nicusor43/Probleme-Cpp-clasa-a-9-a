#include <iostream> 

using namespace std;

int t[25][25];

int main(){
    int n , i, j;
    cin>>n;
    for(j = 1; j<=n; j++){
        for(i = 1; i<=n; i++){
            if(i == j) t[i][j]=0;
            else
            t[i][j] = n - j + 1;
        }
    }
    
    for( i = 1; i<= n; i++){
        for( j = 1; j <= n; j++)
        	cout<<t[i][j]<<" ";
        cout << endl;
    }
}