#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(char s,char d,char e,int n){
  if(n<=0) return ;
  towerOfHanoi(s, e, d, n-1);
  printf("Move Disk-%d from %c to %c \n",n ,s ,d );
  towerOfHanoi(e, d, s,n-1);
}
 int main(int argc, char const *argv[]) {
  int n=3;
towerOfHanoi('s', 'd', 'e',3);
  return 0;
}
