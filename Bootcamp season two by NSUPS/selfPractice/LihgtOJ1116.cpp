#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int test,cnt=0;
  freopen("input.txt","r",stdin);
  cin>>test;
  while (test--) {
    int w,n,m;
    cin>>w;
    cnt++;
    for(int i=2;i<=w/2;i++){
      if(w%i ==0){
        n=w/n;
        m=i;
        cout<<"Case "<<cnt<<": "<<n<<" "<<m<<endl;
        break;
      }
      else {
         cout<<"Case "<<cnt<<": "<<"Impossible"<<endl;
         break;
      }

    }

  }
  return 0;
}
