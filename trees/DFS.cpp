#include <bits/stdc++.h>

using namespace std;

void dfs (int node, vector<int> &vis, vector<int> adj[]) {
    vis[node] = 1;
    cout << node << " ";
    for(auto child: adj[node]) {
        if(!vis[child]) {
            dfs(child, vis, adj);
        }
    }
}

int main() {
    int n;
    cin >> n;
    // el primer valor es el nodo del padre y el segundo sus hijos
    vector<pair<int, int>> edges(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> edges[i].first >> edges[i].second;
    }

    vector<int> adj[n];

    //memset(tree, 0, sizeof(tree));

    /*
    for(auto edge : edges) {
        adj[edge[0].first].push_back(edge[0].second);
        adj[edge.second].push_back(edge.first);
    }
    */
    for (int i = 0; i < n - 1; i++)
    {
        adj[edges[i].first].push_back(edges[i].second);
        adj[edges[i].second].push_back(edges[i].first);
    }
    
    vector<int> vis(n, 0);

    dfs(0, vis, adj);
    return 0;
    
}