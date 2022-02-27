// 1225. 거스름 돈(S, M)

#include <bits/stdc++.h>
using namespace std;

int M, N;
vector<int> coins, DP;

int main()
{
    scanf("%d", &M);
    DP.resize(M + 1, 0);
    scanf("%d", &N);
    coins.resize(N + 1);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &coins[i]);
        if (coins[i] <= M)
            DP[coins[i]] = 1;
    }
    for (int cost = 1; cost <= M; cost++)
    {
        for (int idx = 0; idx < N; idx++)
        {
            if (cost - coins[idx] <= 0)
                continue;
            if (DP[cost - coins[idx]])
            {
                if (!DP[cost])
                    DP[cost] = DP[cost - coins[idx]] + 1;
                else
                    DP[cost] = min(DP[cost], DP[cost - coins[idx]] + 1);
            }
        }
    }
    if (DP[M])
        printf("%d", DP[M]);
    else
        printf("-1");
    return 0;
}