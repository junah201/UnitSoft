// 1230. knapsack

#include <bits/stdc++.h>
using namespace std;

int N, M, ans;
vector<pair<int, int>> jewel;
vector<int> DP;

int main()
{
    scanf("%d", &N);
    DP.resize(N + 1, 0);
    scanf("%d", &M);
    for (int i = 0, w, v; i < M; i++)
    {
        scanf("%d %d", &w, &v);
        if (w > N)
            continue;
        jewel.emplace_back(w, v);
    }
    M = jewel.size();
    for (int idx = 0; idx < M; idx++)
    {
        int w = jewel[idx].first;
        int v = jewel[idx].second;
        for (int cost = N; cost >= 1; cost--)
        {
            if (cost < w)
                continue;
            DP[cost] = max(DP[cost], DP[cost - w] + v);
        }
    }

    for (int i = 1; i <= N; i++)
        ans = max(ans, DP[i]);
    printf("%d", ans);
    return 0;
}