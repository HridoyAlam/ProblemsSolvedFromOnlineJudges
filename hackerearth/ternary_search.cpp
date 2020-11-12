#include<bits/stdc++.h>
using namespace std;

/*
//ternary search
int ternarY_search(int l, int r, int x){

    if(r>=l){
        int mid1 = l + (r-1)/3;
        int mid2 = r - (r-1)/3;


        if(arr[mid1]==x){
        return mid1;
    }
    if(arr[mid2]==x){
        return mid2;
    }
    if(x<arr[mid1]){
        return ternarY_search(l,mid1-1,x)
    }
    else if(x>arr[mid2]){
        return ternarY_search(mid2+1,r,x)
    }
    else{
        return ternarY_search(mid1+1, mid2-1, x)
    }

    }

    return -1;

}
*/
//sloving unimodal function, using ternary concept
double func(double x){
    return 2*x*x - 12*x +7;
    //return -1*1*x*x + 2 * x +3;
}
double ts(double start, double ennd){
    double l = start;
    double r= ennd;
//loop 200 times to reduce the error
    for(int i=0; i<200; i++){
        double l1 = (2*l +r)/3;
        double l2 = (l+ 2*r)/3;

        if(func(l1)<func(l2)){
            r=l2;
        }
        else{
            l = l1;
        }

    }
    /*
    while(l < r){
        int mid = (l+r)>>1;
        if(func(mid) >func(mid+1)){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    */
    double x = l;
    return func(x);
}
int main(){
double n;
cin>>n;
while(n--){
    cout<<"value of Interval"<<endl;
    double r,l;
    cin>>l>>r;
    cout<<ts(l,r)<<endl;
}

return 0;
}
