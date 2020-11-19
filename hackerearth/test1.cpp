#include<bits/stdc++.h>
using namespace std;
typedef long long int ii;
int d,x,y;

ii modularaj(ii a,ii b,ii m)
{
ii sum=1;
while(b!=0)
{
ii u=b%2;
if(u==1)
sum=(sum*a)%m;
a=(a*a)%m;
b/=2;
}
return sum;
}
ii extendedeuclid(ii c,ii m)
{
ii temp;
if(m==0)
{
d=c;
x=1;
y=0;
}
else{
extendedeuclid(m,c%m);
temp=x;
x=y;

y=temp-(c/m)*y;

}
return 0;
}
ii modinverse(ii c,ii m)
{
extendedeuclid(c,m);
return (x%m+m)%m;
}

int main()
{
ii a,b,c,m;
cin>>a>>b>>c>>m;
ii j=modularaj(a,b,m);
ii q=modinverse(c,m);
ii w=((j%m)*(q%m))%m;
cout<<j<<" "<<q<<endl;
cout<<w;
}
