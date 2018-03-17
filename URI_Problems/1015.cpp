#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

double a,b,c,d,distance;
cin>>a>>c;
cin>>b>>d;
distance=sqrt((pow((b-a),2))+(pow((d-c),2)));
cout<<fixed<<setprecision(4)<<distance<<endl;
return 0;
}
