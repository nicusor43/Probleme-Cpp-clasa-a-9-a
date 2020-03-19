#include<algorithm>
#include<iostream>

using namespace std;

int main(){
   int t[10] = {1,2,3,4,5,6,7,8,9,10};
   int result[10];
   auto pos = lower_bound(t, t+10, 4);
   int n = pos - t.begin();
   cout<<n;

}
