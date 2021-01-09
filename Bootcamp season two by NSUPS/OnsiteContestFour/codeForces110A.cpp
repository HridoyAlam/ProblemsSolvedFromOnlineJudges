#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    char line[20];
    gets(line);
    int l=strlen(line);
    for(int i=0;i<l;i++){
        if(line[i] == '4' || line[i] == '7'){
            cnt++;
        }

        }



    if( cnt == 4 || cnt == 7)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    return 0;
}
