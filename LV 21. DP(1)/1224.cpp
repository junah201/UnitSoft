// 1224. scv자원채취

#include <bits/stdc++.h>
using namespace std;

int N;
int inp[102][102];
int DP[102][102];

int main()
{
    scanf("%d", &N);
    for (int y = 1; y <= N; y++)
        for (int x = 1; x <= N; x++)
            scanf("%d", &inp[y][x]);

    DP[0][0] = inp[0][0];
    for (int y = 1; y <= N; y++)
        for (int x = 1; x <= N; x++)
        {
            DP[y][x] = inp[y][x] + max(DP[y - 1][x], DP[y][x - 1]);
        }
    printf("%d", DP[N][N]);
    return 0;
}