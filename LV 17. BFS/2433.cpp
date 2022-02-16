// 2433. 여행경비

#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int N, M;

vector<vector<int>> graph;
vector<bool> visited;
vector <int> debt;

void addEdge(vector<vector<int>> &graph, int node_a, int node_b) {
    graph[node_a].push_back(node_b);
    graph[node_b].push_back(node_a);
}

int bfs(int start) {
    int sum = 0;
    queue <int> q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()) {
        int idx = q.front();
        sum += debt[idx];
        q.pop();
        for (auto i : graph[idx]) {
            if(visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
    if(sum == 0) return 1;
    return 0;
}

int main() {
    scanf("%d %d", &N, &M);
    graph.resize(N);
    visited.resize(N, 0);
    debt.resize(N);
    for(int i=0;i<N;i++) scanf("%d", &debt[i]);
    int a, b;
    while(M--) {
        scanf("%d %d", &a, &b);
        addEdge(graph, a, b);
    }
    for(int i=0;i<N;i++) {
        if(visited[i] == 0) {
            if(bfs(i) == 0) {
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}
