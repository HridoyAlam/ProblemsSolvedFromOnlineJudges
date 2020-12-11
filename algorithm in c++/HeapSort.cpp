
#include<bits/stdc++.h>
using namespace std;
void MaxHeapify(int a[], int n, int i){
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;

    if(l < n && a[l]>a[largest]){
        largest = l;
    }
    if(r < n && a[r]> a[largest]){
        largest = r;
    }
    if(largest != i){
        swap(a[largest],a[i]);
        MaxHeapify(a,n,largest);
    }

}
void BulidMaxHeap(int a[],int n){
    int startInd = (n/2)-1;
    for(int i = startInd; i>=0; i--){
        MaxHeapify(a,n,i);
    }
}

void MinHeapify(int a[], int n, int i){
    int l = 2 * i +1;
    int r = 2 * i + 2;
    int smallest = i;

    if(l < n && a[l] < a[smallest]){
        smallest = l;
    }
    if(r < n && a[r] < a[smallest]){
        smallest = r;
    }
    if(smallest != i){
        swap(a[smallest], a[i]);
        MinHeapify(a,n,smallest);
    }
}

void BuildMinHeap(int a[], int n){
    int startInd = (n/2) - 1;
    for(int i=startInd; i>=0;i--){
        MinHeapify(a,n,i);
    }
}
void HeapSort(int a[], int n){
    //BulidMaxHeap(a,n);
    BuildMinHeap(a,n);

    for(int i =n-1;i>=0 ;i--){
        swap(a[0],a[i]);
        //MaxHeapify(a,i,0);
        MinHeapify(a,i,0);
    }
}
void prinHeap(int a[],int n){

    for(int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,3,5,4,6,13,10,9,8,15,17};
    int n  = sizeof(arr)/sizeof(arr[0]);
    //BulidMaxHeap(arr,n);
    //cout<<"MinHeap"<<endl;
    BuildMinHeap(arr,n);
    cout<<"Min Heap"<<endl;
    prinHeap(arr,n);
    cout<<"Sorting in decreasing order"<<endl;
    HeapSort(arr,n);
    prinHeap(arr,n);
return 0;
}
