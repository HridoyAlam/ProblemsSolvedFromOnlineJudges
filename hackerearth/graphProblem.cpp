#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[1001][1001];
    for(int i=0; i<1001;i++){
        for(int j=0; j<1001;j++){
        arr[i][j]=false;
        }
    }

    int nodes, edges, q, x,y,n1,n2;
    cin>>nodes>>edges;
    for(int i= 0; i<edges; i++){
        cin>>x>>y;
        arr[x][y]=true;
        arr[y][x]=true;
    }
    cin>>q;
    while(q--){
        cin>>n1>>n2;
        if(arr[n1][n2]==true or arr[n2][n1]==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}
/*
4 5
1 2
2 4
3 1
3 4
4 2
*/
