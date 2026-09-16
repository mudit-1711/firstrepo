#include <iostream>
#include <vector>
using namespace std;
struct Edge {
    int u, v, weight;
};
const int INF = 1e9;
bool bellmanFord(int V, int E, const vector<Edge>& edges, int src, vector<int>& dist) {
    dist.assign(V, INF);
    dist[src] = 0;

    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].weight;
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }
    for (int j = 0; j < E; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].weight;
        if (dist[u] != INF && dist[u] + w < dist[v]) {
            return false;
        }
    }
    return true;
}
int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<Edge> edges(E);
    cout << "Enter edges (u v weight):" << endl;
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    int src;
    cout << "Enter source vertex: ";
    cin >> src;

    vector<int> dist;
    if (bellmanFord(V, E, edges, src, dist)) {
        cout << "Vertex distances from source " << src << ":" << endl;
        for (int i = 0; i < V; i++) {
            if (dist[i] == INF) {
                cout << i << " : INF" << endl;
            } else {
                cout << i << " : " << dist[i] << endl;
            }
        }
    } else {
        cout << "Negative weight cycle detected!" << endl;
    }

    return 0;
}
