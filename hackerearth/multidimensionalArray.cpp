#include<bits/stdc++.h>
using namespace std;
int main(){

    //int two_dim_arr[num_rows][nums_col] = {{1,2,3},{4,5,6}};
    int n;
    int m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
