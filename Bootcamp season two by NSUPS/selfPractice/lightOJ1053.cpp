#include "bits/stdc++.h"
#define sqr(x) x*x

using namespace std;
int main(){
  int test,cnt=0;
  freopen("input.txt","r",stdin);
  cin>>test;
  while(test--){
    int a,b,c;
    cin>>a>>b>>c;

    cnt++;
    //if( ( (pow(a,2)+pow(b,2)) == pow(c,2) ) || ( (pow(c,2)+pow(b,2)) == pow(a,2) ) ||( (pow(a,2)+pow(c,2)) == pow(b,2) ))
   if( (sqr(a)+sqr(b)==sqr(c)) || (sqr(a)+sqr(c)==sqr(b)) ||(sqr(c)+sqr(b)==sqr(a)) )
    cout<<"Case "<<cnt<<": "<<"yes"<<endl;
    else cout<<"Case "<<cnt<<": "<<"no"<<endl;
  }
  return 0;
}
