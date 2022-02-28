// 1236. 숫자삼각형

#include <bits/stdc++.h>
using namespace std;

int N, result;
int inp[502][502];
int DP[502][502];

int main()
{
    scanf("%d", &N);
    for (int y = 1; y <= N; y++)
        for (int x = 1; x <= y; x++)
        {
            scanf("%d", &inp[y][x]);
            DP[y][x] = inp[y][x] + max(DP[y - 1][x - 1], DP[y - 1][x]);
        }
    for (int x = 1; x <= N; x++)
        result = max(result, DP[N][x]);
    printf("%d", result);
    return 0;
}