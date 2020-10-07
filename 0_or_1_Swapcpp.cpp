#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;

int k =0;

k = ((a * a) - (b * b)) / ((2*a)-(2*b));

cout<<abs(k)<<endl;

return 0;
}
