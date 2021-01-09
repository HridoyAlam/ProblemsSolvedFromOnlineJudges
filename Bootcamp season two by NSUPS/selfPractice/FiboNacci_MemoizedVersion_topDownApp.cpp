#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int F[MAX];
/* Function to initialize NIL values in lookup table */
void _initialize()
{
  F[0]=0;
  F[1]=1;
  for (int i = 2; i < MAX; i++)
    F[i] = -1;
}
/* function for nth Fibonacci number */
int fib(int n)
{
   if (F[n] != -1)
   return F[n];
   else{
     F[n] =fib(n-1)+fib(n-2);
     return F[n];
   }
}

int main ()
{
  int num;
cin>>num;
  _initialize();
  cout<<"Fibonacci number is "<<num<<" :"<<fib(num)<<endl;
  return 0;
}
