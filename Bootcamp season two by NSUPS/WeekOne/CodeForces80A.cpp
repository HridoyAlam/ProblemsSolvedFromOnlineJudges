#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  /*int primes[n+1];

 for(int i=0;i<=n;i++){
    primes[i]=1;//initially all number are considering prime
 }

 primes[0]=0; //we know "0" is not a prime number
 primes[1]=0; //we know "0" is not a prime number

  for(int i=2;i<=n;i++){
    if(primes[i]==1){
        // Update all multiples of i
        for(int j=2;i*j<=n;j++){
            primes[i*j]=0;
        }
    }
}
for(int i=2;i<=n;i++){
   if(primes[n]==0){
     cout<<"NO";
     break;
   }

      else{
        cout<<"YES";
        break;
      }

}*/
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,100000};
bool flag=false;
for(int i=0;i<15;i++){
  if(prime[i]==n && prime[i+1]==m){
    flag=true;
    break;
  }

}
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

  return 0;
}
