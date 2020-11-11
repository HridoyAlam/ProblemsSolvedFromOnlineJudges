
#include<bits/stdc++.h>
using namespace std;
int binar_search(int arr[], int item,int n){
    //int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0;
    int high = n-1;
    //cout<<n<<" "<<low<<" "<<high<<endl;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]<item){
            low = mid+1;
        }
        else if(arr[mid]>item){
            high = mid-1;
        }
        else{
            return mid;
        }

    }
    return -1;
}
int main(){
    int n,q;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    cin>>q;
    for(int i =0; i<q;i++){
        int x;
        cin>>x;

        cout<<binar_search(arr,x,n)+1<<endl;
    }

return 0;
}
