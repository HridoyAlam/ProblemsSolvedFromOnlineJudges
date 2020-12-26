#include <stdio.h>

int power(int b, int p){
    int value=1;
    while(p !=0){
        value *=b;
        --p;
    }
    return value;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n, sum=0;
    int p = 0;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n;i++){
        if(i%2 ==0){
            p = p+1;
            sum +=power(fib(i),p);
        }
        else{
            sum +=factorial(fib(i));
        }
    }
    printf("%d\n",sum);
   // int test = fib(1);
    //printf("%d",test);
return 0;
}
