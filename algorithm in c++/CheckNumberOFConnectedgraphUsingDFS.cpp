#include<bits/stdc++.h>
using namespace std;
#define MX 100005
vector<int>graph[MX];
bool visited[MX];

void dfs(int source){
    visited[source] = true;

    for(int i=0; i<graph[source].size(); i++){
        int next = graph[source][i];

        if(visited[next] == false){
            dfs(next);
        }
    }

}
void intialize(){
    for(int i = 0; i<MX; i++){
        visited[i]=false;
    }
}


int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    void intialize();
    int cnt=0;
/*
    for(int i=1;i<=nodes;++i){
        if(visited[i]==false){
            dfs(i);
            cnt++;
        }
    }
    cout<<"Numbers of Connected components "<<cnt<<endl;
*/
    int source;
    cin>>source;
    dfs(source);
    for(int i=1;i<=nodes;i++){
        if(visited[i]==false){
            cnt++;
        }

    }

cout<<cnt<<endl;
return 0;
}
/*
6 4
1 2
2 3
1 3
4 5
*/
