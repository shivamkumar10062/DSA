// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bfsCheck(vector<int>adj[],int v,vector<int> & color){
        queue<int>q;
        q.push(v);
        color[v]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto i:adj[node]){
                if(color[i]==-1){
                    color[i]=1-color[node];
                    q.push(i);
                    
                }
                else if(color[i]==color[node]){
                    return false;
                }
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	   
	   for(int i=0; i<V; i++){
	       if(color[i]==-1){
	        if(!bfsCheck(adj,i,color)){
	            return false;
	        }
	       }
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends
