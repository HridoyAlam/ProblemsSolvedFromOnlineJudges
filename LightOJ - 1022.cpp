#include<bits/stdc++.h>
using namespace std;
#define pi = 2 * acos (0.0);
int main(){
int t;
cin>>t;
for(int i =1 ; i<=t; i++){
    double r,d = 0,sq_area = 0,shadow =0, c_area = 0;
    cin>>r;
    d = r + r;
    sq_area = d * d;
    c_area = 2 * acos (0.0) * r * r;
    shadow = sq_area - c_area;
    printf("Case %d: %.2lf\n", i, shadow);
    //cout<<fixed<<setprecision(2)<<shadow<<endl;
}

return 0;
}
