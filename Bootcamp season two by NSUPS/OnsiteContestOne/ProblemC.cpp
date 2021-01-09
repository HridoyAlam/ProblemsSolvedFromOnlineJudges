#include<bits/stdc++.h>
using namespace std;
int main(){
int test,fre,room=0;
freopen("input.txt","r",stdin);
cin>>test;
while(test--){
    int a,b;

    cin>>a>>b;
         fre=b-a;
         if(fre>=2) room++;


    }


cout<<room<<endl;
return 0;
}
