#include<bits/stdc++.h>
using namespace std;
int ditinctNumber(int n){
 int a,b,c,d;
 a=n/1000;
 n=n%1000;
 b=n/100;
 n =n%100;
 c = n/10;
 d=n%10;
if(a==b|| a==c || a==d||b==a || b==c || b==d || c==a|| c==b|| c==d) return 0;
//cout<<"not distinct";
else  return 1;//cout<<" distinct";

}
int main(){
  int year,n;
  cin>>year;
n=year+1;
  for(int i=n;i<=9000;i++){
    if(ditinctNumber(year) == 1){
        cout<<i<<endl;
        break;
    }
     if(ditinctNumber(year) != 1){
        continue;
    }

  }

//ditinctNumber(year);

  return 0 ;
}

