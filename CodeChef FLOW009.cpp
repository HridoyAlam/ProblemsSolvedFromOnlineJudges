#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        double q,p, pay_cash, dis;

        cin>>q>>p;
        if(q<1000){
            pay_cash = q *p;
        }
        else{
            dis = (q*p*10)/100;
            pay_cash = (q*p)-dis;
        }
        cout<<fixed<<setprecision(6)<<pay_cash<<endl;
    }
}
