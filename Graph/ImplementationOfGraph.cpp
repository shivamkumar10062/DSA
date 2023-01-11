/******************************************************************************

implementaion of graph

*******************************************************************************/
#include <bits/stdc++.h>
//#include <unordered_map>

using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u , int v, bool dir){
        adj[u].push_back(v);
        if(dir==0){
            adj[v].push_back(u);
        }
    }
    void showAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Graph g;
    int n;
    cout<<"enter the num of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"enter the number of edge"<<endl;
    cin>>m;
    for(int i=0; i<m; i++){
        int u , v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.showAdjList();
    return 0;
}
