#include<bits/stdc++.h>
#define MIN(num1, num2) num1 < num2 ? num1 : num2
using namespace std;

long long int gcd(long long int num1, long long int num2) {
    if( num2 == 0 ) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}

int main() {
    long long int t;
    cin>>t;

    while( t-- ) {
        long long int n, m, g, l;
        cin>>n>>m;
        g = gcd(n, m);
        l = (n * m) / g;
        printf("%lld %lld\n", g, l);
    }
    return 0;
}

