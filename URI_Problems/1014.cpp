#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
int distance;
double fuel,cost;

cin>>distance>>fuel;
cost=distance/fuel;

cout<<fixed<<setprecision(3)<<cost<<" km/l"<<endl;
return 0;

}
