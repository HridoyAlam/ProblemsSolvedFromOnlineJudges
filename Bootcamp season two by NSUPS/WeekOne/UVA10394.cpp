
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n=100000;
  //cin>>n;
  int primes[n+1];
  int arr[1000];


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
   // Print all prime numbers
    for(int i=2;i<=n;i++){
       if(primes[i]==1){
         if(primes[i]-primes[i+1]==-2){
           for(int j=0;j<i;j++){
             arr[j]=i;
           }
         }
         else
         continue;

       }


  }
for(int k=0;k<arr.length();k++){
  cout<<arr[k]<<" ";
}

  return 0;

}
