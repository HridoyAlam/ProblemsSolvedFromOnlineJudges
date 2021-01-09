#include<bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f;
int arr[10001];
int fn( int n ) {
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    arr[5]=f;
    for(int i=6;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5];
        arr[i] = arr[i] % 10000007;
    }
return arr[n];
}
int main() {
    //int tst;
    freopen("input.txt","r",stdin);
    //cin>>tst;

       // int a, b, c, d, e, f;
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);

        int result = fn(n);
		result = result % 10000007;
        printf("Case %d: %d\n", ++caseno, result);
    }


    return 0;
}
