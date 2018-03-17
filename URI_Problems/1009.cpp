#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

//string name;
char name[100];
double sallery,v,sold;
cin>>name>>sallery>>sold;
v=(sold*0.15)+sallery;

cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<v<<endl;
return 0;
}
