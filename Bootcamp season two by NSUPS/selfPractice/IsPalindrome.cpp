#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
  int reverseNum=0,rem;
  while(n !=0){
    rem =n%10;
    reverseNum = reverseNum *10+rem;
    n /=10;
  }
  return reverseNum;
}
int main(){
  int num;
  freopen("input.txt","r",stdin);
  while(cin>>num){
    if(num == reverseNumber(num)){
      cout<<"This is palindrone Number"<<endl;
    }
    else{
      cout<<"This is not palindrone Number"<<endl;
    }
  }
  return 0;
}
/*//Nth palindrone
int  main(){
  int pal [100000000];
  pal [ 1 ] = 9 ;
  pal [ 2 ] = 9 ;
  pal [ 3 ] = 90;
  pal [ 4 ] = 90 ;
  pal [ 5 ] = 900 ;
  pal [ 6 ] = 900 ;
  pal [ 7 ] = 9000 ;
  pal [ 8 ] = 9000 ;
  pal [ 9 ] = 90000 ;
}*/
