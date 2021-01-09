#include<bits/stdc++.h>
using namespace std;

//string st="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int num[26];
int used[30];
void permutation(int a,int n){

            if(a == n+1 ){
                for(int i=0;i < n; i++){
                    cout<<num[i];
                }
                cout<<endl;
                return ;
            }

            for(int i=0; i < n; i++) if( !used[i]){
                used[i] = 1;
                num[a] = i;
                //st[at] = i;
                permutation(a + 1, n);
                used[i] = 0;
            }
}
int main(){
int tst;
cin>>tst;
for(int i=0;i<tst; i++){
    int n,k;
    cin>>n>>k;
    permutation(n,k);
}
return 0;
}
