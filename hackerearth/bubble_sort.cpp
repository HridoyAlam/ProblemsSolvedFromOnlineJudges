#include<bits/stdc++.h>
using namespace std;
void buble_sort(int a[], int n){
    int  cnt=0;
    for(int i=0; i<n-1; i++){
        int temp;

        for(int k = 0; k<n-i-1; k++){
            if(a[k]>a[k+1]){
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
                cnt++;
            }
        }

    }
    cout<<cnt<<endl;
    /*
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
 */
}
int main(){
    //int arr[] = {1,2,8,10,11,3,4,5,6,7};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //int n = sizeof(arr)/sizeof(*arr);
    //cout<<n<<endl;
    buble_sort(arr,n);
    return 0;
}
