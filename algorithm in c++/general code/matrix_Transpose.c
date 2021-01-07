#include <stdio.h>

void subtractMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize]){

    int subtraction[rowSize][colSize];
    int i,j;

    for(i=0; i<rowSize; i++){
        for(j = 0; j<colSize; j++){
            //subtraction[i][j]= matA[i][j]-matB[i][j];
            subtraction[i][j]= matB[i][j]-matA[i][j];
        }
    }

    printf("subtraction\n");
    //print transpose_a
    for(i=0;i<rowSize;i++){
        for(j=0;j<colSize;j++){
            printf("%d\t",subtraction[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int size = 4;
    int matrix_a[size][size];

    int i, j;

    //take input for matrix a
    for(i=0; i<size; i++){
        for(j = 0; j<size; j++){
            scanf("%d",&matrix_a[i][j]);
        }
    }

    //transose matrix a
    int transpose_a[size][size];

    for(i = 0; i<size;i++){
        for(j = 0; j<size; j++){
            transpose_a[j][i]=matrix_a[i][j];
        }
    }

    //print matrix_a
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",matrix_a[i][j]);
        }
        printf("\n");
    }
    printf("transpose_a\n");
    //print transpose_a
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d\t",transpose_a[i][j]);
        }
        printf("\n");
    }

    subtractMatrix(size,size,matrix_a,transpose_a);
return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
*/
