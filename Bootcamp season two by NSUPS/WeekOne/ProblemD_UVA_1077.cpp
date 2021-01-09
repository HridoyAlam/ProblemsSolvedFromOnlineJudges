#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*long gcd(long long a,long long b){
  while(b){
    a=a%b;
    swap(a,b);
  }
  return a;
}{
if(b==0)
return a;
else
return gcd(b,a%b);

}*/
int main(){
  int test;
  cin>>test;
  for(int i=1;i<=test;i++){
    long long ax,ay,bx,by,l,c,d;
    cin>>ax>>ay>>bx>>by;
    c=abs(ax-bx);
    d=abs(ay-by);
    l=__gcd(c,d)+1;
    cout<<"Case "<<i<<": "<<l<<endl;
  }
  return 0;
}
