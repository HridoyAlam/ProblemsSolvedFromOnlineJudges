#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     long long int sum =0,a,b;
     cin>>n;
    while(n--){

        cin>>a>>b;


        sum +=(b * (b+1))/2 - ( a* (a-1))/2;
    }
    cout<<sum<<endl;

return 0;
}
