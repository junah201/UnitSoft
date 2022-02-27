// 1232. 2 x n 타일링

#include <stdio.h>

int N;
int DP[1002];

int get(int idx)
{
    if (!DP[idx])
        DP[idx] = (get(idx - 1) + get(idx - 2)) % 10007;
    return DP[idx] % 10007;
}

int main()
{
    scanf("%d", &N);
    DP[1] = 1;
    DP[2] = 2;
    printf("%d", get(N) % 10007);
    return 0;
}