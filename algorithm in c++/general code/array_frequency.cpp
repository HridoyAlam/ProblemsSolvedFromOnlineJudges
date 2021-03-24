#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int arr[n];
    int freq[n];
    int count =0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[i]=-1;
    }

    for(int i=0; i<n; i++){
        count = 1;
        for(int j=i+1; j<n;j++){

            if(arr[i] == arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i] != 0){
            cout<<arr[i]<<" occurs : "<<freq[i]<<endl;
        }
    }

    return 0;

}
/*
10
5 10 2 5 50 5 10 1 2 2
*/
