#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mon, tues, wed, thu, fri, sat, sun,cnt = 0;
    cin>> mon>> tues>> wed>> thu>> fri>> sat>> sun;
    while(true){
        n = n - mon;
        if(n<=0){
            cnt = 1;
            break;
        }

        n = n - tues;
        if(n<=0){
            cnt = 2;
            break;
        }

        n = n - wed;
        if(n<=0){
            cnt = 3;
            break;
        }
        n = n - thu;
        if(n<=0){
            cnt = 4;
            break;
        }
        n = n - fri;
        if(n<=0){
            cnt = 5;
            break;
        }
        n = n - sat;
        if(n<=0){
            cnt = 6;
            break;
        }
        n = n - sun;
        if(n<=0){
            cnt = 7;
            break;
        }
    }
    cout<<cnt<<endl;
return 0;
}
