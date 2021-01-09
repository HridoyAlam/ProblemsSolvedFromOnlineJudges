#include<bits/stdc++.h>
using namespace std;


int choose(int n,int r) {
   if(r == 0 || r == n)
      return 1;

   int c[n+1][r+1];
   int i,j;
   for(i=0;i<=n;i++) {

      c[i][0] = 1;
   }
   for(j=0;j<=r;j++) {

      c[0][j] = 0;
   }
   for(i=1;i<=n;i++) {
      for(j=1;j<=r;j++) {
         if (i == j) {

            c[i][j] = 1;
         }
         else if (j > i) {

            	c[i][j] = 0;
         }
         else {

            c[i][j] = c[i-1][j-1] + c[i-1][j];
         }
      }
   }
   return c[n][r];
}

int main() {
   int n,r;
   while( scanf("%d %d", &n,&r) && (n !=0 && r!=0) ){
    //int n = 100,r = 6;
   int comb = choose(n,r);

   cout<<n<<" things taken "<<r<<" at a time is "<<comb<<" exactly."<<endl;

   }
   return 0;
}

