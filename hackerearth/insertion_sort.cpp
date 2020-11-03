#include<bits/stdc++.h>
using namespace std;

void insertion_srot(int a[], int n){

    int un_sort[n];
    memcpy(un_sort, a, n*sizeof(int));

    for(int i = 0; i<n; i++){
        int temp = a[i];
        int j = i;

        while(j>0 && temp<a[j-1]){
            a[j] = a[j-1];
            j = j-1;
        }
        a[j] = temp;

    }



    //int p;
    for(int i =0; i<n; i++){
        for(int j=0;j<n;j++){
            if(un_sort[i] == a[j]){
                cout<<j+1<<" ";

               // p= j;
                //break;
            }
        }
        //cout<<p+1<<" ";
    }


/*
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
*/
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i =0; i<n;i++){
    cin>>arr[i];
}
insertion_srot(arr,n);

return 0;
}
