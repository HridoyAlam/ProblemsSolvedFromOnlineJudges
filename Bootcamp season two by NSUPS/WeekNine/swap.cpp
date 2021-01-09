#include<bits/stdc++.h>
using namespace std;

int maxCycle(int n){
  int cnt =0;
while(true){
    cnt++;
    if(n == 1) break;
    if( n % 2 != 0 ) n = (3 * n) + 1;
    else n =n / 2 ;
}
return cnt;

}
int main(){
int i=3,j=2;
i= i+j-(j=i);
cout<<i<<" "<<j<<endl;
return 0;
}


