#include<bits/stdc++.h>
using namespace std;
int main(){
  int test,cnt=0;
  //freopen("input.txt","r",stdin);
  cin>>test;
  while(test--){
    int n,sum=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i] > 0) sum +=arr[i];
    }
    cnt++;
    cout<<"Case "<<cnt<<": "<<sum<<endl;
  }
  return 0 ;
}
