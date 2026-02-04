#include<bits/stdc++.h>
using namespace std;

int n, m;
bool adjMatrix[100][100];
bool visited[100];

void dfs(int currNode) {
    if (visited[currNode] == true) return;
    cout << currNode << " ";
    visited[currNode] = true;

    for (int i = 1; i <= n; i++) {
        if (adjMatrix[currNode][i] == true) dfs(i);
    }
}

int alreadyDone[100];
void bfs(int rootNode) {
    queue<int> q;
    q.push(rootNode);

    while (q.size() != 0) {
        int currNode = q.front();
        cout << currNode << " ";

        for (int i = 1; i <= n; i++) {
            if (adjMatrix[currNode][i] == true) {
                if (visited[i] == false) q.push(i);
            }
        }

        q.pop();
    }
}
// push, front, size

signed main() {
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        int u, v; 
        cin >> u >> v;
        adjMatrix[u][v] = true;
        adjMatrix[v][u] = true;
    }

    // dfs
    for (int i = 1; i <= n; i++) dfs(i);
    cout << endl;

    // bfs
    for (int i = 1; i <= n; i++) bfs(i);
}