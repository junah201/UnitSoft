// 1231. 1로 만들기

#include <stdio.h>
#include <algorithm>
using namespace std;

int N;
int DP[1000002];

int main()
{
    scanf("%d", &N);
    DP[N] = 1;
    for (int i = N - 1; i >= 1; i--)
    {
        DP[i] = DP[i + 1] + 1;
        if (i * 2 < 1000002 && DP[i * 2] != 0)
            DP[i] = min(DP[i], DP[i * 2] + 1);
        if (i * 3 < 1000002 && DP[i * 3] != 0)
            DP[i] = min(DP[i], DP[i * 3] + 1);
    }
    printf("%d", DP[1] - 1);
    return 0;
}