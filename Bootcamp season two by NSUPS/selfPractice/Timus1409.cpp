#include <bits/stdc++.h>
using namespace std;
int main(){
 //freopen("input.txt","r",stdin);
  int all,larry,harry;
  cin>>larry>>harry;
  all=larry+harry-1;
  larry = all -larry;
  harry = all -harry;
  cout<<larry<<" "<<harry<<endl;
}
