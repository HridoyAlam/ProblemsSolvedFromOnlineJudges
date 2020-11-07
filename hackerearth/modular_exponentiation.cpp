#include<bits/stdc++.h>
using namespace std;

int recursivePower(int x, int n){
    if(n==0){
        return 1;
    }
    return x*recursivePower(x,n-1);
}
// will not work when value is 10e18
int iterativePower(int x, int n){
int result = 1;

while(n>0){
    result = result * x;
    n--;
}
return result;

}

int binaryExponentiation(int x, int n){
    if(n==0){
        return 1;
    }
    else if(n%2 == 0){
        return binaryExponentiation(x * x, n/2);
    }
    else{
        return x*binaryExponentiation(x*x, (n-1)/2);
    }

}

int iterativeBinaryExponentiation(int x, int n){
    int result = 1;

    while(n>0){
        if(n % 2 ==1){
            result = x * result;
        }
        x = x * x;
        n /=2;
    }
    return result;

}
int modularExponentitoan(int x, int n, int m){
    if(n==0){
        return 1;
    }
    else if(x%2 == 0){
        return modularExponentitoan((x*x)%m, n/2, m);
    }
    else{
        return modularExponentitoan((x*x)%m, (n-1)/2,m)%m;
    }
}
//time complexity O(logN)
// memory complexity O(logN)
int iterativeModularExponentition(int x,int power, int m){
    int result =1;
    while(power>0){
        if(power % 2 == 1){
            result = (result * x) %m;
        }
        x = (x*x)%m;
        power =power/2;
    }
    return result;
}
//time complexity O(logN)
// memory complexity O(1)

int gcdRecursive_euclid(int a, int b){
    if(b==0){
        return a;
    }
    return gcdRecursive_euclid(b,a%b);
}
int gcdIterative(int a, int b){
    while(b){
        a = a%b;
        swap(a,b);
    }
    return a;
}

int modInverNaiveApproach(int a, int m){
    a= a%m;
    for(int b=1;b<m;b++){
        if((a*b)%m == 1){
            return b;
        }
    }
}
// time complexity O(n)

    int d,z,y;
    void extendedEuclid(int a,int b){
        if(b==0){
            d = a;
            z=1;
            y=0;
        }
        else{
            extendedEuclid(b,a%b);
            int temp=z;
            z=y;
            y=temp - (a/b)*y;
        }
    }
    // when a,m are coprime
    int modImverseApporch2(int a, int m){
        extendedEuclid(a,m);
        return (z%m + m) %m; // x may be negaitve
    }

int main(){

/*
    cout<<recursivePower(3,10)<<endl;
    cout<<iterativePower(3,10)<<endl;
    cout<<binaryExponentiation(3,10)<<endl;
    cout<<iterativeBinaryExponentiation(3,10)<<endl;
*/
    int A,B,C,M,ab,c;
    cin>>A>>B>>C>>M;

    ab = iterativeModularExponentition(A,B,M);
    c = modImverseApporch2(C,M);
    cout<<ab<<" "<<c<<endl;
    cout<<(ab * c)%M<<endl;

return 0;
}
