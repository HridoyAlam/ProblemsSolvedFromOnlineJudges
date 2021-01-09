#include<bits/stdc++.h>
using namespace std;
long long fibResult[5003];
void fib(int n){
   fibResult[0]=0;
   fibResult[1]=1;
   fibResult[2]=1;
   //if(n > 2) return 0;

   for(int i=3;i<=n;i++)
    fibResult[i]=fibResult[i-1] + fibResult[i-2];


}
int main(){
int n;
cin>>n;

fib(n);
cout<<"The Fibonacci number for "<<n<<" is "<<fibResult[n]<<endl;
return 0;

}
