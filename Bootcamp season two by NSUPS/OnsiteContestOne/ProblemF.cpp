#include<bits/stdc++.h>
using namespace std;
int main(){
 int test;
freopen("input.txt","r",stdin);
cin>>test;
while(test--){
     int num,sum=0;
    cin>>num;
    for( int i=1 ; i <= sqrt(num);i++){
       if((num%i) == 0 ) sum +=i;
       else continue;
    }
    cout<<sum<<endl;
}

return 0;

}
