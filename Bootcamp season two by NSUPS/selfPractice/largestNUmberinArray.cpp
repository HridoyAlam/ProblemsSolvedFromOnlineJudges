#include<bits/stdc++.h>
using namespace std;
 int main(int argc, char const *argv[]) {
int max=0;
  int arr[]={1,2,4,5,9,1,5,101,6,110};
  for(int i=0;i<10;i++){
  if(arr[i]>arr[i+1]) max=arr[i];
  }
  cout<<max<<endl;
  return 0;
}
