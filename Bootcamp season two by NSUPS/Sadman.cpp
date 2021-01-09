#include<bits/stdc++.h>
using namespace std;

#define MAX 100001
int value[MAX];

int CheckPairs(int arr[], int arrSize, int sum){
        int i, temp,flag=0;
        memset(value,-1,sizeof(value));

                for (i = 0; i < arrSize; i++){
                    temp = sum - arr[i];
                    if (temp >= 0 && value[temp] == 1)

                        flag = 1;
                    value[arr[i]] = 1;
                }
        return flag;
}


int main(){

	int A[] = {1,3, 3, 2, 4};
	int n = 4;
	int arrSize = sizeof(A)/sizeof(A[0]);

	int result=CheckPairs(A, arrSize, n);
    if(result == 1)
        cout<<"Yes there exists a pair"<<endl;
    else
        cout<<"No such pair exists"<<endl;
	getchar();
	return 0;
}

