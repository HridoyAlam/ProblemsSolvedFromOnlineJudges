#include<bits/stdc++.h>
using namespace std;


 int main(){

    long long int a,b,x,cnt =0;

    cin>>a>>b>>x;
    /*for(int i = a; i<=b; i++){
        if( i % x == 0){
            cnt++;
        }
    }*/

    cnt = (b+x) / x - (a+x-1) / x;
    cout<<cnt<<endl;
return 0;
}

