#include<bits/stdc++.h>
using namespace std;
#define MX 10
bool visited[MX];
vector<int>graph[MX];

void initialize(){
    for(int i=0;i<MX;i++){
        visited[i]=0;
    }

}

void dfs(int source){
    visited[source] = 1;

    for(int i=0; i<graph[source].size(); i++){
        int next = graph[source][i];

        if(visited[next]==0){
            dfs(next);
        }
    }
}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(0);

    for(int i=0;i<nodes; i++){
        if(visited[i]==1){
            cout<<"Nodes "<<i<<" is visited"<<endl;
        }
        else{
            cout<<"Nodes "<<i<<" is not visited"<<endl;
        }
    }
return 0;
}
/*
5 4
0 1
1 2
1 3
3 4

*/
