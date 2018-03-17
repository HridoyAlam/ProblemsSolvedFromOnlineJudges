#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int i=0;
  double N=0,D;

  while(1){
    cin>>D;
    if(D==0)
      break;
      i++;
      N = ceil((3+(sqrt(9+8*D)))/2);;
      cout<<"Case "<<i<<": "<<fixed<<setprecision(0)<<N<<endl;

}
return 0;
}
