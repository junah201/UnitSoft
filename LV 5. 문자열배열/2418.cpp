// 2418. 0 행렬

#include <bits/stdc++.h>
using namespace std;

int N, M;
int inp[102][102];
int chk[102][102];

void make_zero(int rx, int ry)
{
    for (int y = 0; y < N; y++)
        for (int x = 0; x < M; x++)
            if (x == rx || y == ry)
                chk[y][x] = 1;
}

int main()
{
    scanf("%d %d", &N, &M);
    for (int y = 0; y < N; y++)
        for (int x = 0; x < M; x++)
        {
            scanf("%d", &inp[y][x]);
            if (!inp[y][x])
                make_zero(x, y);
        }

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < M; x++)
        {
            if (chk[y][x])
                printf("0 ");
            else
                printf("%d ", inp[y][x]);
        }
        printf("\n");
    }

    return 0;
}