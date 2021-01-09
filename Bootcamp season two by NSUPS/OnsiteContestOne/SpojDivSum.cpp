#include<bits/stdc++.h>
using namespace std;
int main(){
 int test;
freopen("input.txt","r",stdin);
cin>>test;
while(test--){
  long long   int num,sum=0;
    cin>>num;

    if(num==1)
     cout<<"0"<<endl;
    else{
          int i,t=sqrt(num);

          for( int i=2 ; i <= t;i++){
          if((num%i) == 0 ){

           if(i== num/i)
           sum+=i;
          else
            sum +=i+num/i;
          }
        }
       sum++;
       cout<<sum<<endl;
    }

}



return 0;

}
