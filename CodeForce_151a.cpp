#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int kl = (k * l);
    int cd = c * d;
    //int salt = p / np;

    int cnt = 0;

    while(true){

        kl = kl-nl;
        cd = cd-1;
        p = p-np;

        if(kl< 0 || cd< -0|| p<0){
            break;
        }
        else{
            cnt++;
        }
    }




    cout<<floor(cnt/n)<<endl;
return 0;
}
