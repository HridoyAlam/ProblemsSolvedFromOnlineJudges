#include<bits/stdc++.h>
using namespace std;

int maxCycle(int n){
  int cnt =0;
while(1){
    cnt++;
    if(n == 1) break;
    if( n % 2 != 0 )
        n = (3 * n) + 1;
    else
        n = n / 2 ;
}
return cnt;

}
int main(){
int i,j,c,temp;
while(scanf("%d %d",&i,&j) == 2){
    int len=0;
    cout<<i<<" "<<j<<" ";
    if(i>j) {
        i = i + j - (j=i);

    }

    for(int k = i;k <= j; k++){
        c= maxCycle(k);

        if(c >= len){
            len = c;
        }

    }
    cout<<len<<endl;
}

return 0;
}

