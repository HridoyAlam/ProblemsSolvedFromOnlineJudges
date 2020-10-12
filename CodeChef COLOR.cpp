#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,r=0,g=0,b=0;
        string st;
        cin>>n;
        cin>>st;

        for(int i=0; i< n;i++){
            if(st[i] == 'R')
                r +=1;
            if(st[i] == 'G')
                g +=1;
            if(st[i] == 'B')
                b +=1;
        }

        long long int val = 0;
        /*
        if(r > g && r > b){
            val = r;
        }
        if(g>r && g > b){
            val = g;
        }
        if( b>r && b>g){
            val = b;
        }
        if(r==g && g==b){
            cout<<(n-r)<<endl;
        }
        else{
            cout<<n-val<<endl;
        }*/
        val = max(r,g);
        val = max(val, b);
        cout<<n-val<<endl;


    }
return 0;
}
