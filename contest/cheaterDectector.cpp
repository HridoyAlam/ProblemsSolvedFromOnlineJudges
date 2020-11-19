

#include<bits/stdc++.h>
using namespace std;
int iterativeModularExponentition(int x,int power, int m){
    int result =1;
    while(power>0){
        if(power % 2 == 1){
            result = (result * x) %m;
        }
        x = (x*x)%m;
        power =power/2;
    }
    return result;
}
int main(){
    int test;
    int x,y,n;
    cin>>test;
    while(test--){
        cin>>x>>y>>n;
        cout<<iterativeModularExponentition(x,y,n)<<endl;
    }
return 0;
}
