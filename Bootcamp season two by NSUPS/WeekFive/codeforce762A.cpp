#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,val,k,cnt=0;
vector <long long int> v;
cin>>n>>k;
long long test=sqrt(n);
for(long long i=1;i<=test;i++){
    if(n%i == 0){
            val=n/i;
            if((val*val)!=n){

                v.push_back(val);
                cnt++;
            }
        v.push_back(i);
        cnt++;

    }


}
sort(v.begin(),v.end());
if(k>cnt) cout<<-1<<endl;
else cout<<v[k-1]<<endl;



return 0;
}
