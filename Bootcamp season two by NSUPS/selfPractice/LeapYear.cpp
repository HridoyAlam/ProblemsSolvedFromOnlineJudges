#include<bits/stdc++.h>
using namespace std;
int main(){
  int year;
  freopen("input.txt","r",stdin);
  while(cin>>year){
    if(year % 400 == 0 || ( year%100 !=0  && year%4==0 )){
      cout<<"This is Leap Year"<<endl;
    }
    else
    {
      cout<<"This is not Leap Year"<<endl;
    }
  }
  return 0;
}
