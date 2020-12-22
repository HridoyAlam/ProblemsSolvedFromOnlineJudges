#include<bits/stdc++.h>
using namespace std;

int partitionArray(int a[], int p, int r){
    int x = a[r];
    int i = p-1;
    for(int j=p; j<=r-1; j++){
        if(a[j] <= x){
            i +=1;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1], a[r]);
return i+1;
}

void quicSort(int a[], int p, int r){
    if(p < r){
        int q = partitionArray(a,p,r);
        quicSort(a,p,q-1);
        quicSort(a,q+1,r);
    }
}


// Randomized Quick Sort
int rand_partition(int a[], int p, int r){
    srand(time(NULL));
    int random = p+rand() % (r-p);
    swap(a[random], a[r]);
    return partitionArray(a,p,r);
}
void QuickSort_randomized(int a[], int p, int r){
    if(p<r){
        int q = rand_partition(a,p,r);
        QuickSort_randomized(a,p,q-1);
        QuickSort_randomized(a,q+1,r);
    }
}
void printArray(int arr[], int n){
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,3,4,3,1,7,9,3,2,4,70,32,70};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<endl;

    QuickSort_randomized(arr,0, n-1);
    printArray(arr,n);
return 0;
}
