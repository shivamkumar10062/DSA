/******************************************************************************

BFS

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> graph;
vector<bool> visited;
void make_edge(int a, int b){
    graph[a].push_back(b);
    graph[b].push_back(a);
}
void bfs(int v){
    queue<int> b_queue;
    b_queue.push(v);
    visited[v]=true;
    while(!b_queue.empty()){
        int f=b_queue.front();
        b_queue.pop();
        cout<<f<<" ";
        for(auto i=graph[f].begin(); i!=graph[f].end(); i++){
            if(!visited[*i]){
                b_queue.push(*i);
                visited[*i]=true;
            }
        }
    }
} 


int main()
{
    int vertex,edge;
    cout<<"Number of vertex"<<endl;
    cin>>vertex;
    cout<<"Number of edge"<<endl;
    cin>>edge;
    graph.assign(vertex,vector<int>());
    visited.assign(vertex, false);
    cout<<"enter edge"<<endl;
    int a,b;
    for(int i=0; i<edge; i++){
        cin>>a>>b;
        make_edge(a,b);
    }
    for(int i=0; i<vertex; i++){
        if(!visited[i]){
        bfs(i);
        }
    }

    return 0;
}
