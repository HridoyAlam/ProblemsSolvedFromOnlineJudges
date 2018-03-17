#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
double a,b,c,recTriangle,circle,trapezium,square,rec,pi=3.14159;
cin>>a>>b>>c;
recTriangle =(a*c)/2;
circle=pi*c*c;
trapezium=(((a+b)/2)*c);
square =b*b;
rec=a*b;
cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<recTriangle <<endl;
cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle <<endl;
cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapezium <<endl;
cout<<"QUADRADO: "<<fixed<<setprecision(3)<< square <<endl;
cout<<"RETANGULO: "<<fixed<<setprecision(3)<< rec<<endl;
return 0;
}
