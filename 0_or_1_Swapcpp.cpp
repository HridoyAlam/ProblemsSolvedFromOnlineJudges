#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int cnt= 0;
int temp[n];

for(int i=0;i<n;i++){
    temp[i] = arr[i];
}
sort(temp, temp+n);

/*
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
cout<<endl;
*/
for(int i=0;i<n;i++){
        if (arr[i] != temp[i]){
            cnt++;
        }
    }

if(cnt == 2 || cnt ==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
/*

*/
