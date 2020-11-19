
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,res;
    cin>>n>>k>>m;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n-1;i++){
        sum +=arr[i];
    }
    res = m * n -sum;

    res = max(res, 0);

/*
    if(res < k){
        res = res;
    }
    else{
        res =-1;
    }
*/
    res = (res>k)? -1:res;
    cout<<res<<endl;

return 0;
}

