#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int a,b,c,d,e,f,g;
 cin>>a>>b>>c>>d;
 e=(a+b+abs(a-b))/2;
 f=(e+c+abs(e-c))/2;
 g=(f+d+abs(f-d))/2;
 cout<<g<<" eh o maior"<<endl;
    return 0;
}
