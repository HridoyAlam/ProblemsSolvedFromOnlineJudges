#include<bits/stdc++.h>
using namespace std;
int main(){
map<string, int>m;
int t;
cin>>t;
while(t--){
    int q;
    cin>>q;
    string x;
    int y;
    cin>>x;
    if(q == 1){


        cin>>y;
        m[x] +=y;
    }
    else if(q==2){
        m.erase(x);

    }
    else if(q==3){
        if(m.find(x) != m.end()){
            cout<<m[x]<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }

}
return 0;
}
