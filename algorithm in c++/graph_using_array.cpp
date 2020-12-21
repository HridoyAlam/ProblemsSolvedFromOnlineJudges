#include<bits/stdc++.h>
using namespace std;

    bool arr[10][10];

    int initialze(){
        for(int i=0; i<=10; i++){
            for(int j=0; j<10; j++){
                arr[i][j] = false;
            }
        }
    }

int main(){
    int x,y, nodes, edges;
    initialze();
    cin>>nodes>>edges;
    for(int i =0; i<edges; i++){
        cin>>x>>y;
        arr[x][y] = true; //mark the edges from vertex x to vertex y
    }
    if(arr[3][4] ==true){
        cout<<"There is an edges between 3 & 4"<<endl;
    }
    else{
        cout<<"There is no edges between 3 & 4"<<endl;
    }
return 0;
}
