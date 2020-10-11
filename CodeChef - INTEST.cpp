#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int n,k;
    int cnt =0 ;
    //freopen("input.txt","r" stdin);
    cin>>n>>k;

    while(n--){
        int ti;
        cin>>ti;

        if(ti % k == 0)
            cnt++;
    }

    cout<<cnt<<endl;

return 0;
}
