#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c, a_sqr, b_sqr, c_sqr;
while(true){
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0){
        break;
        }
    a_sqr = a*a;
    b_sqr = b * b;
    c_sqr = c * c;

    if((a_sqr + b_sqr == c_sqr) || ( a_sqr + c_sqr == b_sqr) || ( b_sqr + c_sqr == a_sqr)){
    cout<<"right"<<endl;
    }
    else{
    cout<<"wrong"<<endl;
    }


}
return 0;
}
