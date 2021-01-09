#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
  int test;
  cin>>test;
  while(test--){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int count=1;
    for(int i=0;i<n;i++){

      for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]) count++;
      }

    }
    cout<<count;
  }

  return 0;
}
