#include<bits/stdc++.h>
using namespace std;

void Maxheapify(int a[], int n,int i){

    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if(left < n && a[left]>a[largest]){
        largest = left;
    }
    if(right < n && a[right]> a [largest]){
        largest = right;
    }
    if(largest != i){
        swap(a[largest], a[i]);
        Maxheapify(a,n,largest);
    }

}
void Buildmaxheapify(int a[], int n){
    int startInd = (n/2) - 1;
    for(int i= startInd; i>=0; i--){
        Maxheapify(a,n,i);
    }
}
void Heapsort(int a[],int n){
    Buildmaxheapify(a,n);

    for(int i=n-1 ; i>=0; i--){
        swap(a[0],a[i]);
        //n = n-1;
        Maxheapify(a,i,0);
    }
}

int heap_extract_max(int a[],int n){

    if(n<1){
        cout<<"overflow"<<endl;
        return 1;
    }
    //Buildmaxheapify(a,n);
    int m= a[0];
    swap(a[0],a[n-1]);
    n = n-1;
    Maxheapify(a,n,0);

    //cout<<m<<endl;
    return m;
}
int heap_increase_key(int a[], int i, int key){
    if(a[i]>key){
        cout<<"key value is smaller"<<endl;
        return 1;
    }
    a[i] = key;

    while(i>0 && a[i/2]<a[i]){
        swap(a[i],a[i/2]);
        i = i/2;
    }
}
void max_heap_insert(int a[],int n,int key){
    n = n+1;
    a[n+1] = -100000;
    heap_increase_key(a,n+1,key);
}
void printheapsort(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {4,8,1,10,49,20,7,5,3,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    Buildmaxheapify(arr,n);
    printheapsort(arr,n);
    //Heapsort(arr,n);
    //cout<<"After Heap Sort"<<endl;
    //printheapsort(arr,n);

    heap_increase_key(arr,0,50);
    cout<<"After Update"<<endl;
    printheapsort(arr,n);
    cout<<heap_extract_max(arr,n)<<endl;
    max_heap_insert(arr,n,200);
    Buildmaxheapify(arr,n);
    cout<<"After Update"<<endl;
    printheapsort(arr,n);
    cout<<heap_extract_max(arr,n)<<endl;

return 0;
}
