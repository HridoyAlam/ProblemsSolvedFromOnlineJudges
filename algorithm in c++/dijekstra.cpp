#include<bits/stdc++.h>
using namespace std;
#define MX 105
#define INF 1000000000
struct node{
    int val;
    int cost;
};
//1 -> {2,5}
//2 -> {5,40},{3,45}
vector<node> g[MX];

bool vis[MX];
int dist[MX];

void reset(){
    for(int i=0; i<MX; i++){
        g[i].clear();
        vis[i]=0;
        dist[i] = INF;
    }
}

class cmp{
public:
    bool operator()(node &A, node &B){
        if(A.cost > B.cost) return true;//for making min priority
        return false;
    }
};
void dikjstra(int source){
    priority_queue<node,vector<node>, cmp> PQ;
    PQ.push({source, 0});

    while(!PQ.empty()){
        node current = PQ.top();
        PQ.pop();

        int val=current.val;
        int cost=current.cost;

        if(vis[val]==1){
            continue;
        }
        dist[val]=cost;//final cost
        vis[val]=1;

        for(int i=0; i<g[val].size();i++){
            int nxt = g[val][i].val;
            int nxtCost = g[val][i].cost;

            if(vis[nxt] == 0){
                PQ.push({nxt,cost + nxtCost});
            }
        }
    }
}
int main(){
    reset();
    int nodes, edges;
    cin>>nodes>>edges;
    for(int i=1; i<=edges; i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});

    }
    cout<<"Enter source: "<<endl;
    int source;
    cin>>source;
    dikjstra(source);
    for(int i=1; i<= nodes; i++){
        cout << "Node: " << i << " Distance: ";
        if (dist[i] == INF) cout << "inf" << "\n";
        else cout << dist[i] << "\n";
    }
return 0;
}
/*
5 6
1 2 2
1 3 1
1 4 3
2 3 1
4 5 2
5 3 5



5 6
1 2 2
1 3 1
2 3 1
1 4 3
4 5 2
5 3 5
*/
