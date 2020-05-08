#include <fstream>
#include <iostream>

using namespace std;

ifstream f("numere.in");

int t[101];

int main()
{
	int i = 1, j, ma, n;
	while(f>>n){
		t[i] = n;
		i++;
	} 
	
	ma = i - 1;
	
	for(i=1; i<=ma; i++){
		for(j=i + 1; j<=ma; j++){
			while(t[i]==t[j]){		
				for(n = j; n< ma; n++){
					t[n] = t[n+1];
				}
				ma--;
				}	
		}
	}
	
	
	for(i = 1; i<=ma; i++) cout << t[i] << "  ";
}