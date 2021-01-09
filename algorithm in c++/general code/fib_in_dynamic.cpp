#include<bits/stdc++.h>
using namespace std;
long long int arr[101];
int main(){
    long long int n=90;
    arr[0]=0;
    arr[1]=1;
    for(long long int i=2;i<=n;i++){
        arr[i]= arr[i-1] + arr[i-2];
    }

    /*
    for(long long int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    */
    int check;
    cin>>check;
    cout<<check<<"th fibonacci is: "<<arr[check]<<endl;

return 0;
}
