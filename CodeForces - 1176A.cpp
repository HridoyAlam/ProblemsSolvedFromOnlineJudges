#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("input.txt","r", stdin);
int q ;
cin>>q;

while(q--){
    long long int n, cnt =0;
    cin>>n;
    while(n % 2 ==0){
        n /=2;
        cnt++;
    }
    while(n % 3 ==0){
        n /=3;
        cnt +=2;
    }
    while(n % 5 ==0){
        n /=5;
        cnt +=3;

    }
    if (n==1){
        cout<<cnt<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

return 0;
}
