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
  int num,p,i=1,cnt=0;
  //freopen("input.txt","r",stdin);
  cin>>num;
while(num !=0){
    if(i==reverseNumber(i))
    cnt++;
    if(cnt==num) p=i;
    break;
  }
  cout<<p<<" "<<endl;
  return 0;
}
