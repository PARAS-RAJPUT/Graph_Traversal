#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V + 1);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    void BFS(int start) {
        cout << "\n--- BFS Traversal ---\n";
        vector<bool> visited(V + 1, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        int step = 1;
        while (!q.empty()) {
            int u = q.front();
            q.pop();

            cout << "Step " << step++ << ": Visited " << u << "\n";

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                    cout << "   -> Pushed " << v << " into queue\n";
                }
            }
        }
    }

    void DFS_recursiveUtil(int u, vector<bool> &visited, int &step) {
        visited[u] = true;
        cout << "Step " << step++ << ": Visited " << u << "\n";

        for (int v : adj[u]) {
            if (!visited[v]) {
                cout << "   -> Going deeper into " << v << "\n";
                DFS_recursiveUtil(v, visited, step);
                cout << "   <- Backtracking from " << v << " to " << u << "\n";
            }
        }
    }

    void DFS_recursive(int start) {
        cout << "\n--- DFS Recursive Traversal ---\n";
        vector<bool> visited(V + 1, false);
        int step = 1;
        DFS_recursiveUtil(start, visited, step);
    }

    void DFS_iterative(int start) {
        cout << "\n--- DFS Iterative Traversal ---\n";
        vector<bool> visited(V + 1, false);
        stack<int> st;
        st.push(start);

        int step = 1;
        while (!st.empty()) {
            int u = st.top();
            st.pop();

            if (!visited[u]) {
                visited[u] = true;
                cout << "Step " << step++ << ": Visited " << u << "\n";

                for (auto it = adj[u].rbegin(); it != adj[u].rend(); ++it) {
                    if (!visited[*it]) {
                        st.push(*it);
                        cout << "   -> Pushed " << *it << " into stack\n";
                    }
                }
            }
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    Graph g(V);

    cout << "Enter " << E << " edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    g.BFS(start);
    g.DFS_recursive(start);
    g.DFS_iterative(start);

    return 0;
/*
6 7
1 2
1 3
2 4
2 5
3 6
4 6
5 6
1
*/