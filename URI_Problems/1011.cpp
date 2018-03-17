#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

double R,value=0,pi=3.14159;
cin>>R;
value =((4.0/3.0)*pi*(pow(R,3)));
cout<<"VOLUME = "<<fixed<<setprecision(3)<<value<<endl;
return 0;
}
