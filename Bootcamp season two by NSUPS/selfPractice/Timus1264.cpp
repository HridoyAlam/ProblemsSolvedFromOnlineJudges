#include<bits/stdc++.h>
using namespace std;
int amountsOfSecond(int n,int m){
  int cnt=0,arr[2*n];
  for(int i=0;i<n;i++){
    for(int j=0;j<=m;j++){
      arr[i]=i*j;
      cnt++;
    }
  }
  return cnt;
}
int main(){
  int N,M;
  cin>>N>>M;
cout<<amountsOfSecond(N,M)<<endl;
  return 0;
}
