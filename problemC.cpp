#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 int n;
 cout<<"Enter number of variable :";

 cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++){
   cin>>arr[i];
 sort(arr,n);
 cout<<arr[1];
 }
    return 0;
}
