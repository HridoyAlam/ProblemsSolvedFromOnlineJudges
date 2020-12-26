#include<bits/stdc++.h>
using namespace std;
vector<int> adj[15];
int main(){
    int nodes, edges;
    int x,y;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++){

        cin>>x>>y;
        adj[x].push_back(y);
    }
    for(int i=1; i<=nodes; i++){
        cout<<"Adjancy list of node "<<i<<": ";

            for(int j=0; j < adj[i].size(); j++){
                if(j == adj[i].size() - 1){
                    cout<<adj[i][j]<<endl;
                }
                else{
                    cout<<adj[i][j] << " --> ";
                }
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
