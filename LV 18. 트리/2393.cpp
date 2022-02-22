// 2393. 신장개업 (L)

#include <stdio.h>
#include <vector>
using namespace std;

int N, mx, id = 99999999;

vector<vector<int>> graph;
vector<vector<int>> DP;
vector<int> value;
vector<int> visited;

int dfs(int idx, int start)
{
    int result = 0;
    for (int i = 0; i < graph[idx].size(); i++)
    {
        int temp = 0;
        int a = graph[idx][i];
        if (visited[a] == 0)
        {
            if (DP[idx][i] == -1)
            {
                visited[a] = 1;
                temp = dfs(a, start);
                DP[idx][i] = temp;
                visited[a] = 0;
            }
            else
                temp = DP[idx][i];
        }
        if (temp >= result)
            result = temp;
    }
    result += value[idx];
    if (result == mx)
        if (start < id)
            id = start;
    if (result > mx)
    {
        mx = result;
        id = start;
    }
    return result;
}

int main()
{
    scanf("%d", &N);
    graph.resize(N + 1);
    DP.resize(N + 1);
    value.resize(N + 1);
    visited.resize(N + 1, 0);
    id = N;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &value[i]);
    }
    int x, y;
    for (int i = 1; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        graph[x].push_back(y);
        DP[x].push_back(-1);
        graph[y].push_back(x);
        DP[y].push_back(-1);
    }

    for (int i = 1; i <= N; i++)
    {
        if (graph[i].size() == 1)
        {
            visited[i] = 1;
            dfs(i, i);
            visited[i] = 0;
        }
    }
    printf("%d %d", mx, id);
    return 0;
}