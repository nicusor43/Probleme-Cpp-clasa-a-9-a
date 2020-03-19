#include <iostream>

using namespace std;

int main(){
    int n, Z=0, U=0, i; 
    cin>>n;
    while(n > 0){
        if((n & 1) == 0) Z++; // vedem daca primul bit al numarului e 0 
        else U++;           // altfel e 1  
        n >>= 1;             // mutam toti bitii numarului la dreapta cu 1 
    }

    cout<<Z<<"  "<<U;

}