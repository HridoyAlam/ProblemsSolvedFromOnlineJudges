#include<stdio.h>


void findMaxMin(int n, int arr[], int* secondlargest, int* smallest){

    int i,j,temp=0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n-i; j++)
           {
               if (arr[j] > arr[j+1])
              {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                //swap(&arr[j], &arr[j+1]);
              }
           }
    }
    smallest = arr[0];
    secondlargest = arr[n-2];

    printf(" second largest %d  smallest %d",secondlargest,smallest);

}

int main(){
    int arr[10];
    int i,n=10;
    int smallest,secondlargest;
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    findMaxMin(n,arr,secondlargest,smallest);
    //printf("\nThe secondlargest number is %d and the smaller number is %d",secondlargest,smallest);


  return 0;
}
