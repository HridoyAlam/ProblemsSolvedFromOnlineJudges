#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
int sum=0;
double p=0,D;
while(1){
scanf("%lf",&D);
if(D==0)
break;
sum++;
p = ceil((3+(sqrt(9+8*D)))/2);
printf("Case %d: %.0lf\n",sum,p);
}
}
