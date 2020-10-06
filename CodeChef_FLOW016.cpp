#include<bits/stdc++.h>
#define MIN(num1, num2) num1 < num2 ? num1 : num2
using namespace std;

int gcd(int num1, int num2) {
    if( num2 == 0 ) {
        return num1;
    }
    return gcd(num2, num1 % num2);
}

int main(int argc, char *argv[]) {
    int t;
    scanf("%d", &t);

    while( t-- ) {
        int n, m, g, l;
        scanf("%d%d", &n, &m);
        g = gcd(n, m);
        l = (n * m) / g;
        printf("%d %d\n", g, l);
    }
    return 0;
}

