#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    int c1,n1,c2,n2;
    double p1,p2,value;

    cin>>c1>>n1>>p1;
    cin>>c2>>n2>>p2;
    value=(n1*p1)+(n2*p2);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<value<<endl;
    return 0;
}
