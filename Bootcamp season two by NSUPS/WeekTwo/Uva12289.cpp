#include<bits/stdc++.h>
using namespace std;
int main(){

int tst;
cin>>tst;
while(tst--){
    string st;
    cin>>st;
    if(st.length() == 5) cout<<3<<endl;
    else if((st[0] == 'o' && st[1] == 'n') || (st[0] == 'o' && st[2] == 'e') ||
            st[1] == 'n' && st[2] == 'e'

            ) cout<<1<<endl;

                else cout<<2<<endl;
}
return 0;
}
