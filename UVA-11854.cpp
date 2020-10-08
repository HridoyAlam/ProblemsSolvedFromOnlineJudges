#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
while(true){
    cin>>a>>b>>c;
    if( ((a*a)+(b*b)) == (c*c) ){
    cout<<"right"<<endl;
    }
    else{
    cout<<"wrong"<<endl;
    }

    if(a==0 && b==0 && c==0){
        break;
    }
}
return 0;
}
