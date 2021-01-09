#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int num){
 if (num==0) return 1;
 else{
    return num*fact(num-1);
 }

}

int main(){
long long int d,divide,val;
freopen("input.txt","r",stdin);
while(cin>>d>>divide){
    val=fact(d);

if((val%divide) == 0 ){
    cout<<divide<<" divides "<<d<<"!"<<endl;

}
else {
        cout<<divide<<" does not divides "<<d<<"!"<<endl;
}
}



//cout<<d<<endl;
return 0;
}


