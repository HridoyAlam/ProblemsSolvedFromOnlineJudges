#include<bits/stdc++.h>
using namespace std;
int main(){

    string text;
    int count =0;
    while(cin>>text){
        if(text == "*") break;

        count++;

        if(text=="Hajj")
        cout<<"Case "<<count<<":"<<" Hajj-e-Akbar"<<endl;

        else if(text=="Umrah")
        cout<<"Case "<<count<<":"<<" Hajj-e-Asghar"<<endl;
    }

return 0;
}
