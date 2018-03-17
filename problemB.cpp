#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
  int a,b,c,secLarg;
  cin>>a>>b>>c;
  int res=0;
  secLarg=((((a>b)&&(b>c))||((a<b)&&(b<c)))?b:(((b>a)&&(a>c))||((b<a)&&(a<c)))?a:c);
  cout<<secLarg<<endl;
}
return 0;
}
