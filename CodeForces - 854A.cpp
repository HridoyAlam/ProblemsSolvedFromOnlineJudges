#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){

    if( b == 0);
        return a;
    return gcd(b, a%b);
    }



int main(){
 int n,a,b;
  cin>>n;
/*
  a = floor(n/2);

  b = ceil(n/2);


  if(a == b){
    a = a - 1;
    b = b + 1;
  }
*/

for(int i = n/2; i>=1;i--){
    if(__gcd(i,n-i) == 1){
        cout<<i<<" "<<n-i<<endl;
        return 0;
    }
}

}
