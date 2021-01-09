#include<bits/stdc++.h>
using namespace std;
int main(){

  freopen("input.txt","r",stdin);
  int test,cnt=0;
  cin>>test;
  while(test--){
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){

      if(i%2==1)sum =sum+i;
    }
    cnt++;
    cout<<"Case "<<cnt<<": "<<sum<<endl;
  }
  return 0;
}
