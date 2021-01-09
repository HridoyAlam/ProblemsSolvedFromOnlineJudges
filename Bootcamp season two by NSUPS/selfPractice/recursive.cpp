#include<bits/stdc++.h>
using namespace std;

int fib(int n){
            if(n==0) return 0;
            else if(n==1 || n==2) return 1;
            else{
                return fib(n-1)+fib(n-2);
            }

}
int fact(int n){
            if(n == 0 || n==1) return 1;
            if(n>1) return n*fact(n-1);


}
int sum(int n){
            if (n==0) return 0;
            if(n==1) return 1;

            return (n+ sum(n-1) );

}

int findMin(int a[], int size)
{

            if (size == 1)
                return a[0];
            return min(a[size-1], findMin(a, size-1));
}

int DecToBin(int dec)
{
        if (dec == 0)
            return 0;
        else
            return (dec % 2 + 10 * DecToBin(dec / 2));
}

double SeriesSum(int n) {
            double value = 0;
            if( n==0 ) {
                return 1;
            }
            else {
                value = 1.0/(pow(2,n) ) + SeriesSum(n-1);
                return value;
            }

            return value;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<fact(n)<<endl;
    cout<<sum(n)<<endl;
    cout<<DecToBin(n)<<endl;
    cout<<SeriesSum(n)<<endl;
return 0;
}
