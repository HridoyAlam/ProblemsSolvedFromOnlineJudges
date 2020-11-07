#include<bits/stdc++.h>
using namespace std;
typedef long long int LLI;
LLI d,z,y;
LLI ModularExponentition(LLI x, LLI n, LLI m){

    LLI result =1;
    while(n !=0){
        if(n % 2 ==1){
            result = (result* x)%m;
        }
        x = (x*x)%m;
        n = n/2;
    }
    return result;
}



LLI extendedEuclid(LLI c, LLI m){
    LLI temp;
    if(m == 0){
        d = c;
        z=1;
        y=0;
    }
    else{
        extendedEuclid(m,c%m);
        temp = z;
        z = y;
        y = temp-(c/m)*y;
    }
    return 0;
}
LLI modInverse(LLI c, LLI m){
    extendedEuclid(c,m);
    return (z%m+m)%m;
}

int main(){
    LLI A,B,C,M,ab,c;
    cin>>A>>B>>C>>M;

    ab = ModularExponentition(A,B,M);
    c = modInverse(C,M);
    cout<<ab<<" "<<c<<endl;
    cout<<((ab %M) * (c %M))%M<<endl;
return 0;
}
