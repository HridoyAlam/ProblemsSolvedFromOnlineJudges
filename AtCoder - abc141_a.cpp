#include<bits/stdc++.h>
using namespace std;
int main(){
    string sn = "Sunny";
    string cd = "Cloudy";
    string rn = "Rainy";

    string s;
    cin>>s;

    if(s == sn ) cout<<cd<<endl;
    if(s == cd ) cout<<rn<<endl;
    if(s == rn ) cout<<sn<<endl;

return 0;
}
