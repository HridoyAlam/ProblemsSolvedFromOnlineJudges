#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,sum=0;
  freopen("input.txt","r",stdin);
  cin>>n;
if(n>0){
  for(int i=1;i<=n;i++){
    sum +=i;
  }
}
else{
  for(int i=n;i<=1;i++){
    sum +=i;

  }
}
  cout<<sum<<endl;
  return 0;
}
