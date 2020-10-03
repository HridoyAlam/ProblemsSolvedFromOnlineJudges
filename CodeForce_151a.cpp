#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int td = (k * l) / nl;
    int cd = c * d;
    int salt = p / np;

    int min_value ;

    //int value = min(td,cd,salt) / n;



        if(( td > cd && cd >salt) || (cd > td && salt< cd)){
            min_value = salt;
        }
        else if( (td>salt && salt>cd) || ( salt>td && td > cd) ){
            min_value = cd;
        }

        else{
            min_value = td;
        }

    cout<<floor(min_value/n)<<endl;
return 0;
}
