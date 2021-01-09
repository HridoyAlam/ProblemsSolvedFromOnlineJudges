#include<bits/stdc++.h>
using namespace std;

int main(){
  int test;
  cin>>test;
  while(test--){
    int g,l,a,b;
    cin>>g>>l;
   a=g;
   b=l;
   if(l%g != 0){
  cout<<-1<<endl;
   }
  else
     cout<<a<<" "<<b<<endl;
  }
  return 0;
}
