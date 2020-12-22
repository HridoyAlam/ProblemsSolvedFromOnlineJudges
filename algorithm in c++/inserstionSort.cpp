#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[], int n){

    for(int i=0; i<n; i++){
        int temp = arr[i];
        int j=i;

        while(j>0 && temp<arr[j-1]){
            arr[j]=arr[j-1];
            j -=1;
        }
        arr[j]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,4,-1,-5,6,7,5,8,90,4,4};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion(arr,n);
return 0;
}
